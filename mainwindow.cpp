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
    delete model;
}

void MainWindow::readDB(const QString &path) {
    ui->label->setText(DataBaseIO::readDB(path, model));

    ui->tableView->setModel(model);
}

void MainWindow::saveDB(const QString &path)
{
    ui->label->setText(DataBaseIO::saveDB(path, model));
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    clickedRow = index.row();
    clickedColumn = index.column();
}

void MainWindow::on_add_product_clicked()
{
    CRUD::add_product(model);

    ui->tableView->setModel(model);

    saveDB(path);
}

void MainWindow::on_add_characteristic_clicked()
{
    QString nameNewCharacyteristicText = ui->lineEdit->text();

    CRUD::add_characteristic(model, nameNewCharacyteristicText);

    saveDB(path);
}

void MainWindow::on_delete_product_clicked()
{
    CRUD::delete_product(model, clickedRow) ? (void)saveDB(path) : (void)QMessageBox::critical(nullptr, "Ошибка", "Ошибка выбора удаляемой строки. Строк должно быть больше 1");
}

void MainWindow::on_delete_characteristic_clicked()
{
    CRUD::delete_characteristic(model, clickedColumn) ? (void)saveDB(path) : (void)QMessageBox::critical(this, "Ошибка", "Ошибка выбора удаляемого столбца. Столбец не должен быть основным");
}

void MainWindow::on_clear_table_clicked()
{
    CRUD::clear_table(model);

    ui->tableView->setModel(model);

    saveDB(path);
}

void MainWindow::on_calculate_clicked()
{
    float colvo, price, nds, total, ndsValue, totalWithNds;

    for(int i = 0; i < model->rowCount(); i++){
        colvo = model->index(i, 2).data(Qt::DisplayRole).toFloat();
        price = model->index(i, 3).data(Qt::DisplayRole).toFloat();
        nds = model->index(i, 5).data(Qt::DisplayRole).toFloat() / 100.0;

        total = colvo * price;
        ndsValue = total * nds;
        totalWithNds = total + ndsValue;

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

