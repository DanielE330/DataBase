#include "crud.h"

CRUD::CRUD() {}

void CRUD::setup_default_headers(QStandardItemModel *model) {
    model->setRowCount(1);
    model->setColumnCount(headers.size());
    for (int i = 0; i < headers.size(); i++) {
        model->setHeaderData(i, Qt::Horizontal, headers[i]);
    }
}

void CRUD::add_product(QStandardItemModel *model){
    int countColumn = model->columnCount();
    int countRow = model->rowCount();

    model->insertRow(countRow);

    for(int i = 0; i < countColumn; i++){
        model->setItem(countRow, i, new QStandardItem(""));
    }
}

void CRUD::add_characteristic(QStandardItemModel *model, QString &nameNewCharacyteristicText){
    int countColumn = model->columnCount();

    model->insertColumn(countColumn);
    for(int i = 0; i < model->rowCount(); i++){
        model->setItem(i, countColumn, new QStandardItem(""));
    }

    model->setHeaderData(countColumn, Qt::Horizontal, nameNewCharacyteristicText);
}

bool CRUD::delete_product(QStandardItemModel *model, int &clickedRow){
    if(model->rowCount() > 1){
        model->removeRow(clickedRow);
        return true;
    }
    else{
        return false;
    }
}

bool CRUD::delete_characteristic(QStandardItemModel *model, int &clickedColumn){
    if(clickedColumn < COUNT_BASE_COLUMNS){
        return false;
    }
    else{
        model->removeColumn(clickedColumn);
        return true;
    }
}

void CRUD::clear_table(QStandardItemModel *model){
    model->clear();
    CRUD::setup_default_headers(model);

    for(int i = 0; i < COUNT_BASE_COLUMNS; i++){
        model->setItem(0, i, new QStandardItem(""));
    }
}







