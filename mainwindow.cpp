#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    model(new QStandardItemModel(this))
{
    ui->setupUi(this);
    setWindowTitle("DataBase");
    showMaximized();
    readDB(path);

    addCharacteristic = new QShortcut(this);
    addCharacteristic->setKey(Qt::CTRL | Qt::Key_Plus);
    connect(addCharacteristic, SIGNAL(activated()), this, SLOT(on_add_characteristic_clicked()));

    deleteCharacteristic = new QShortcut(this);
    deleteCharacteristic->setKey(Qt::CTRL | Qt::Key_Minus);
    connect(deleteCharacteristic, SIGNAL(activated()), this, SLOT(on_delete_product_clicked()));

    addProduct = new QShortcut(this);
    addProduct->setKey(Qt::SHIFT | Qt::Key_Plus);
    connect(addProduct, SIGNAL(activated()), this, SLOT(on_add_product_clicked()));

    deleteProduct = new QShortcut(this);
    deleteProduct->setKey(Qt::SHIFT | Qt::Key_Minus);
    connect(deleteProduct, SIGNAL(activated()), this, SLOT(on_delete_product_clicked()));

    clearTable = new QShortcut(this);
    clearTable->setKey(Qt::SHIFT | Qt::Key_C);
    connect(clearTable, SIGNAL(activated()), this, SLOT(on_clear_table_clicked()));



}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::setup_default_headers() {
    model->setRowCount(1);
    model->setColumnCount(headers.size());
    for (int i = 0; i < headers.size(); i++) {
        model->setHeaderData(i, Qt::Horizontal, headers[i]);
    }
}

void MainWindow::readDB(QString path) {
    QFile fileDB(path);
    if (!fileDB.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Ошибка", "Файл не найден");
        setup_default_headers();
        return;
    }

    QTextStream in(&fileDB);
    QStandardItemModel *tempModel = new QStandardItemModel(this);

    QString headerLine = in.readLine();
    if (!headerLine.isEmpty()) {
        QStringList headers = headerLine.split(';');
        tempModel->setColumnCount(headers.size());
        for (int i = 0; i < headers.size(); i++) {
            tempModel->setHeaderData(i, Qt::Horizontal, headers[i]);
        }

        int row = 0;
        while (!in.atEnd()) {
            QString dataLine = in.readLine();
            if (dataLine.isEmpty()) continue;

            QStringList items = dataLine.split(';');
            tempModel->insertRow(row);
            for (int col = 0; col < items.size(); col++) {
                tempModel->setItem(row, col, new QStandardItem(items[col]));
            }
            row++;
        }
    } else {
        setup_default_headers();
    }

    fileDB.close();

    delete model;
    model = tempModel;
    ui->tableView->setModel(model);
    ui->label->setText("Путь: " + path);
}



void MainWindow::saveDB(QString path)
{
    if (path.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Не указан путь для сохранения");
        return;
    }

    if (!path.endsWith(".txt", Qt::CaseInsensitive)) {
        path += ".txt";
    }

    QStandardItemModel* modelCopy = new QStandardItemModel();

    QStringList headers;
    for(int i = 0; i < model->columnCount(); ++i) {
        headers << model->headerData(i, Qt::Horizontal).toString();
    }
    modelCopy->setHorizontalHeaderLabels(headers);

    for(int row = 0; row < model->rowCount(); ++row) {
        modelCopy->insertRow(row);
        for(int column = 0; column < model->columnCount(); ++column) {
            QStandardItem* item = model->item(row, column);
            if(item) {
                modelCopy->setItem(row, column, new QStandardItem(item->text()));
            }
        }
    }

    QFuture<void> future = QtConcurrent::run([this, path, modelCopy]() {
        QFile file(path);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QMetaObject::invokeMethod(this, [this, path]() {
                QMessageBox::critical(this, "Ошибка",
                                      "Не удалось открыть файл для записи: " + path);
            }, Qt::QueuedConnection);
            delete modelCopy;
            return;
        }

        QTextStream out(&file);

        for(int i = 0; i < modelCopy->columnCount(); ++i) {
            if(i > 0) out << ";";
            out << modelCopy->headerData(i, Qt::Horizontal).toString();
        }
        out << "\n";


        for(int row = 0; row < modelCopy->rowCount(); ++row) {
            for(int col = 0; col < modelCopy->columnCount(); ++col) {
                if(col > 0) out << ";";
                QStandardItem* item = modelCopy->item(row, col);
                out << (item ? item->text() : "");
            }
            out << "\n";
        }

        file.close();

        ui->label->setText("Путь: " + path);

        delete modelCopy;
    });

    QFutureWatcher<void>* watcher = new QFutureWatcher<void>();
    connect(watcher, &QFutureWatcher<void>::finished, [watcher]() {
        watcher->deleteLater();
    });
    watcher->setFuture(future);
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    clickedRow = index.row();
    clickedColumn = index.column();
}

void MainWindow::on_add_product_clicked()
{
    countColumn = model->columnCount();
    countRow = model->rowCount();

    model->insertRow(countRow);
    for(int i = 0; i < countColumn; i++){
        model->setItem(countRow, i, new QStandardItem(""));
    }

    ui->tableView->setModel(model);
    saveDB(path);
}

void MainWindow::on_add_characteristic_clicked()
{
    countColumn = model->columnCount();
    QString nameNewCharacyteristicText = ui->lineEdit->text();

    model->insertColumn(countColumn);
    for(int i = 0; i < model->rowCount(); i++){
        model->setItem(i, countColumn, new QStandardItem(""));
    }

    model->setHeaderData(countColumn, Qt::Horizontal, nameNewCharacyteristicText);
    saveDB(path);
}

void MainWindow::on_delete_product_clicked()
{
    if(model->rowCount() > 1){
        model->removeRow(clickedRow);
        saveDB(path);
    }
    else{
        QMessageBox::critical(this, "Ошибка", "Ошибка выбора удаляемой строки. Строк должно быть больше 1");
    }
}

void MainWindow::on_delete_characteristic_clicked()
{
    if(clickedColumn < COUNT_BASE_COLUMNS){
        QMessageBox::critical(this, "Ошибка", "Ошибка выбора удаляемого столбца. Столбец не должен быть основным");
    }
    else{
        model->removeColumn(clickedColumn);
        saveDB(path);
    }
}

void MainWindow::on_clear_table_clicked()
{
    model->clear();
    setup_default_headers();
    for(int i = 0; i < COUNT_BASE_COLUMNS; i++){
        model->setItem(0, i, new QStandardItem(""));
    }
    ui->tableView->setModel(model);
    saveDB(path);
}

void MainWindow::on_calculate_clicked()
{
    for(int i = 0; i < model->rowCount(); i++){
        float colvo = model->index(i, 2).data(Qt::DisplayRole).toFloat();
        float price = model->index(i, 3).data(Qt::DisplayRole).toFloat();
        float nds = model->index(i, 5).data(Qt::DisplayRole).toFloat() / 100.0;

        float total = colvo * price;
        float ndsValue = total * nds;
        float totalWithNds = total + ndsValue;

        model->setItem(i, 4, new QStandardItem(QString::number(total)));
        model->setItem(i, 6, new QStandardItem(QString::number(ndsValue)));
        model->setItem(i, 7, new QStandardItem(QString::number(totalWithNds)));
    }

    saveDB(path);
}

void MainWindow::on_readDB_triggered()
{
    QString newPath = QFileDialog::getOpenFileName(this, "Выбор файла", path, "Текстовые файлы (*.txt);");
    if(!newPath.isEmpty()) {
        path = newPath;
        readDB(path);
    }
}

void MainWindow::on_saveDB_triggered()
{
    QString newPath = QFileDialog::getSaveFileName(this, "Сохранить файл", path, "Текстовые файлы (*.txt);");
    if(!newPath.isEmpty()) {
        path = newPath;
        saveDB(path);
    }
}




void MainWindow::on_about_me_triggered()
{
    AboutMe aboutMe;

    aboutMe.setModal(true);
    aboutMe.exec();
}

