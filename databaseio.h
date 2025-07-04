#ifndef DATABASEIO_H
#define DATABASEIO_H

#include <QString>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QFuture>
#include <QtConcurrent>

class DataBaseIO
{
public:
    DataBaseIO();

    static const QString saveDB(const QString &path, QStandardItemModel *model);

    static const QString readDB(const QString &path, QStandardItemModel *model);

private:
    inline static const QStringList headers = {
        "название", "код ТНВЭД", "количество товара",
        "цена товара", "всего", "ндс в процентах",
        "ндс", "всего с ндс"
    };
};

#endif // DATABASEIO_H
