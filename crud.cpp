#include "crud.h"

CRUD::CRUD() {}

void CRUD::setup_default_headers(QStandardItemModel *model) {
    model->setRowCount(1);
    model->setColumnCount(headers.size());
    for (int i = 0; i < headers.size(); i++) {
        model->setHeaderData(i, Qt::Horizontal, headers[i]);
    }
}

void CRUD::add_product(QStandardItemModel *model, int &countColumn, int &countRow){
    model->insertRow(countRow);

    for(int i = 0; i < countColumn; i++){
        model->setItem(countRow, i, new QStandardItem(""));
    }
}

void CRUD::add_characteristic(QStandardItemModel *model, int &countColumn, int &countRow, QString &nameNewCharacyteristicText){
    model->insertColumn(countColumn);
    for(int i = 0; i < model->rowCount(); i++){
        model->setItem(i, countColumn, new QStandardItem(""));
    }

    model->setHeaderData(countColumn, Qt::Horizontal, nameNewCharacyteristicText);
}
