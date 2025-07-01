#include <QStandardItemModel>
#include <QMessageBox>
#include <QFileDialog>
#include <QShortcut>
#include <QFuture>
#include <QtConcurrent/QtConcurrent>
#include <QStringList>

#ifndef CRUD_H
#define CRUD_H

class CRUD
{
public:
    CRUD();

    static void setup_default_headers(QStandardItemModel *model);

    static void add_product(QStandardItemModel *model, int &countColumn, int &countRow);

    static void add_characteristic(QStandardItemModel *model, int &countColumn, int &countRow, QString &nameNewCharacyteristicText);
private:

    inline static const QStringList headers = {
        "название", "код ТНВЭД", "количество товара",
        "цена товара", "всего", "ндс в процентах",
        "ндс", "всего с ндс"
    };};

#endif // CRUD_H
