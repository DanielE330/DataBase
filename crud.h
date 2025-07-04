#include <QStandardItemModel>

#ifndef CRUD_H
#define CRUD_H

#define COUNT_BASE_COLUMNS 8

class CRUD
{
public:
    CRUD();

    static void add_product(QStandardItemModel *model);

    static void add_characteristic(QStandardItemModel *model, QString &nameNewCharacyteristicText);

    static bool delete_product(QStandardItemModel *model, int &clickedRow);

    static bool delete_characteristic(QStandardItemModel *model, int &clickedColumn);

    static void clear_table(QStandardItemModel *model);

private:

    inline static const QStringList headers = {
        "название", "код ТНВЭД", "количество товара",
        "цена товара", "всего", "ндс в процентах",
        "ндс", "всего с ндс"
    };

    static void setup_default_headers(QStandardItemModel *model);

};

#endif // CRUD_H
