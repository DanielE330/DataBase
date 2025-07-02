#include <QMainWindow>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QFileDialog>
#include <QShortcut>
#include <QFuture>
#include <QtConcurrent/QtConcurrent>

#include "databaseio.h"
#include "crud.h"

#ifndef MAINWINDOW_H
#define MAINWINDOW_H



#include "aboutme.h"

#define COUNT_BASE_COLUMNS 8

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_add_characteristic_clicked();

    void on_delete_characteristic_clicked();

    void on_delete_product_clicked();

    void on_add_product_clicked();

    void on_clear_table_clicked();

    void on_calculate_clicked();

    void on_readDB_triggered();

    void on_saveDB_triggered();

    void saveDB(const QString &path = "fileDB.txt");

    void readDB(const QString &path = "fileDB.txt");

    void on_about_me_triggered();

private:
    Ui::MainWindow *ui;

    QStandardItemModel *model;


    QString path = "fileDB.txt";

    int clickedRow = 0;
    int clickedColumn = 0;
    int countColumn;
    int countRow;

    QShortcut *addCharacteristic;
    QShortcut *deleteCharacteristic;
    QShortcut *addProduct;
    QShortcut *deleteProduct;
    QShortcut *clearTable;



    void setup_default_headers();
};

#endif // MAINWINDOW_H
