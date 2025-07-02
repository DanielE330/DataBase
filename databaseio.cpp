#include "databaseio.h"
#include <QFile>
#include <QTextStream>
#include <QFuture>
#include <QtConcurrent>

DataBaseIO::DataBaseIO() {}

const QString DataBaseIO::saveDB(const QString &path, QStandardItemModel *model)
{
    if (path.isEmpty()) {
        QMessageBox::warning(nullptr, "Ошибка", "Не указан путь для сохранения");
    }

    QString filePath = path;
    if (!filePath.endsWith(".txt", Qt::CaseInsensitive)) {
        filePath += ".txt";
    }

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(nullptr, "Ошибка",
                              "Не удалось открыть файл для записи: " + filePath);
    }

    QTextStream out(&file);

    for (int i = 0; i < model->columnCount(); ++i) {
        if (i > 0) out << ";";
        out << model->headerData(i, Qt::Horizontal).toString();
    }
    out << "\n";

    for (int row = 0; row < model->rowCount(); ++row) {
        for (int col = 0; col < model->columnCount(); ++col) {
            if (col > 0) out << ";";
            QStandardItem* item = model->item(row, col);
            out << (item ? item->text() : "");
        }
        out << "\n";
    }

    file.close();

    return path;
}

const QString DataBaseIO::readDB(const QString &path, QStandardItemModel *model)
{
    if (path.isEmpty()) {
        QMessageBox::warning(nullptr, "Ошибка", "Не указан путь для загрузки");
    }

    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(nullptr, "Ошибка",
                              "Не удалось открыть файл для чтения: " + path);
    }

    model->clear();

    QTextStream in(&file);

    if (!in.atEnd()) {
        QString headerLine = in.readLine();
        QStringList headers = headerLine.split(";");
        model->setColumnCount(headers.size());
        for (int col = 0; col < headers.size(); ++col) {
            model->setHeaderData(col, Qt::Horizontal, headers[col]);
        }
    }

    int row = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList values = line.split(";");

        model->insertRow(row);
        for (int col = 0; col < values.size() && col < model->columnCount(); ++col) {
            model->setItem(row, col, new QStandardItem(values[col]));
        }
        row++;
    }

    file.close();
    return path;
}
