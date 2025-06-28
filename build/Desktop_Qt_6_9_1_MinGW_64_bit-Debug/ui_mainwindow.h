/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *saveDB;
    QAction *readDB;
    QAction *about_me;
    QWidget *centralwidget;
    QVBoxLayout *mainLayout;
    QHBoxLayout *bottomLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *calculate;
    QPushButton *clear_table;
    QPushButton *add_characteristic;
    QPushButton *delete_product;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *delete_characteristic;
    QPushButton *add_product;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(670, 354);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #e6f0f7; \n"
"    color: #333333;\n"
"    font-family: \"Segoe UI\", Arial;\n"
"    font-size: 12px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #c2d6eb;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background: #d0e0f0;\n"
"    color: #555555;\n"
"    padding: 8px 15px;\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #e6f0f7;\n"
"    color: #003366;\n"
"    border-bottom: 2px solid #6A5ACD;\n"
"}\n"
"\n"
"QTableView {\n"
"    background: #ffffff; \n"
"    gridline-color: #e0e0e0; \n"
"    border: 1px solid #e0e0e0;\n"
"    selection-background-color: #6A5ACD;\n"
"    selection-color: white; \n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #ffffff;\n"
"    color: #1c2fff; \n"
"    padding: 4px;\n"
"    border: 1px solid #e0e0e0;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2"
                        ":0, y2:1,\n"
"        stop:0 #6A5ACD, stop:1 #4169E1\n"
"    );\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 8px 15px;\n"
"    border-radius: 6px;\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #7B68EE, stop:1 #4876FF\n"
"    );\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #483D8B, stop:1 #0000CD\n"
"    );\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #E0FFFF, stop:1 #D0E0F0\n"
"    );\n"
"    border: 1px solid #A0C4E3;\n"
"    padding: 5px;\n"
"    border-radius: 6px;\n"
"    selection-background-color: #6A5ACD;\n"
"    color: #1c2fff; \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #6A5ACD;\n"
"    background: #F0F8FF;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #1c2fff; \n"
"    font-weight: bold;\n"
"    padding: 2px 5px;\n"
""
                        "    background-color: transparent;\n"
"}\n"
"\n"
"QLabel::disabled {\n"
"    color: #808080;\n"
"}\n"
"\n"
"QMenu {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #E0FFFF, stop:1 #C0E0F7\n"
"    );\n"
"    color: #000000;\n"
"    border: 1px solid #6A5ACD;\n"
"    margin-top: 2px;\n"
"    border-radius: 4px;\n"
"    box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    background-color: #6A5ACD;\n"
"    color: white;\n"
"}\n"
"\n"
"QToolBar {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #E0FFFF, stop:1 #C0E0F7\n"
"    );\n"
"    color: #1c2fff;\n"
"    border: none;\n"
"    spacing: 6px;\n"
"    padding: 4px;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QMenuBar {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #D0E6F8, stop:1 #A0C4E3\n"
"    );\n"
"    color: #1c2fff;\n"
"    border: none;\n"
"    padding: 4px;\n"
"    border-radius: 6px;\n"
"}"
                        "\n"
"\n"
"QMenuBar::item:selected {\n"
"    background-color: #B0D4EC;\n"
"    color: white;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    background: #f0f7ff;\n"
"    width: 10px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #6A5ACD, stop:1 #4169E1\n"
"    );\n"
"    min-height: 20px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    background: #d0e0f0;\n"
"    border: 1px solid #c2d6eb;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical:hover, QScrollBar::sub-line:vertical:hover {\n"
"    background: #B0D4EC;\n"
"}"));
        saveDB = new QAction(MainWindow);
        saveDB->setObjectName("saveDB");
        QFont font;
        font.setBold(false);
        saveDB->setFont(font);
        saveDB->setMenuRole(QAction::TextHeuristicRole);
        readDB = new QAction(MainWindow);
        readDB->setObjectName("readDB");
        about_me = new QAction(MainWindow);
        about_me->setObjectName("about_me");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mainLayout = new QVBoxLayout(centralwidget);
        mainLayout->setObjectName("mainLayout");
        bottomLayout = new QHBoxLayout();
        bottomLayout->setObjectName("bottomLayout");

        mainLayout->addLayout(bottomLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        calculate = new QPushButton(centralwidget);
        calculate->setObjectName("calculate");

        gridLayout->addWidget(calculate, 8, 4, 1, 1);

        clear_table = new QPushButton(centralwidget);
        clear_table->setObjectName("clear_table");

        gridLayout->addWidget(clear_table, 6, 4, 1, 1);

        add_characteristic = new QPushButton(centralwidget);
        add_characteristic->setObjectName("add_characteristic");

        gridLayout->addWidget(add_characteristic, 8, 1, 1, 1);

        delete_product = new QPushButton(centralwidget);
        delete_product->setObjectName("delete_product");

        gridLayout->addWidget(delete_product, 6, 3, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 8, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 6, 2, 1, 1);

        delete_characteristic = new QPushButton(centralwidget);
        delete_characteristic->setObjectName("delete_characteristic");

        gridLayout->addWidget(delete_characteristic, 8, 3, 1, 1);

        add_product = new QPushButton(centralwidget);
        add_product->setObjectName("add_product");
        add_product->setStyleSheet(QString::fromUtf8("QPushButton {\"\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"stop:0 #6A5ACD, stop:1 #4169E1);\n"
"color: white;\"\"   border: none;\n"
"padding: 8px 15px;\n"
"border-radius: 4px;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"stop:0 #7B68EE, stop:1 #4876FF);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"stop:0 #483D8B, stop:1 #0000CD)\n"
"}"));

        gridLayout->addWidget(add_product, 6, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        mainLayout->addLayout(horizontalLayout);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);

        mainLayout->addWidget(tableView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 670, 30));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(menubar->sizePolicy().hasHeightForWidth());
        menubar->setSizePolicy(sizePolicy1);
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QLinearGradient gradient(0, 0, 0, 1);
        gradient.setSpread(QGradient::Spread::PadSpread);
        gradient.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(224, 255, 255, 255));
        gradient.setColorAt(1, QColor(192, 224, 247, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(0, 0, 255, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush2);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        QLinearGradient gradient1(0, 0, 0, 1);
        gradient1.setSpread(QGradient::Spread::PadSpread);
        gradient1.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(224, 255, 255, 255));
        gradient1.setColorAt(1, QColor(192, 224, 247, 255));
        QBrush brush3(gradient1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush3);
        QLinearGradient gradient2(0, 0, 0, 1);
        gradient2.setSpread(QGradient::Spread::PadSpread);
        gradient2.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(224, 255, 255, 255));
        gradient2.setColorAt(1, QColor(192, 224, 247, 255));
        QBrush brush4(gradient2);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush4);
        QBrush brush5(QColor(28, 47, 255, 128));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        QLinearGradient gradient3(0, 0, 0, 1);
        gradient3.setSpread(QGradient::Spread::PadSpread);
        gradient3.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(224, 255, 255, 255));
        gradient3.setColorAt(1, QColor(192, 224, 247, 255));
        QBrush brush6(gradient3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        QLinearGradient gradient4(0, 0, 0, 1);
        gradient4.setSpread(QGradient::Spread::PadSpread);
        gradient4.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(224, 255, 255, 255));
        gradient4.setColorAt(1, QColor(192, 224, 247, 255));
        QBrush brush7(gradient4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush7);
        QLinearGradient gradient5(0, 0, 0, 1);
        gradient5.setSpread(QGradient::Spread::PadSpread);
        gradient5.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(224, 255, 255, 255));
        gradient5.setColorAt(1, QColor(192, 224, 247, 255));
        QBrush brush8(gradient5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        QBrush brush9(QColor(28, 47, 255, 255));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush9);
        QLinearGradient gradient6(0, 0, 0, 1);
        gradient6.setSpread(QGradient::Spread::PadSpread);
        gradient6.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(224, 255, 255, 255));
        gradient6.setColorAt(1, QColor(192, 224, 247, 255));
        QBrush brush10(gradient6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush10);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush9);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush9);
        QLinearGradient gradient7(0, 0, 0, 1);
        gradient7.setSpread(QGradient::Spread::PadSpread);
        gradient7.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(224, 255, 255, 255));
        gradient7.setColorAt(1, QColor(192, 224, 247, 255));
        QBrush brush11(gradient7);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush11);
        QLinearGradient gradient8(0, 0, 0, 1);
        gradient8.setSpread(QGradient::Spread::PadSpread);
        gradient8.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(224, 255, 255, 255));
        gradient8.setColorAt(1, QColor(192, 224, 247, 255));
        QBrush brush12(gradient8);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        menu->setPalette(palette);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menu->addAction(saveDB);
        menu->addAction(readDB);
        toolBar->addAction(about_me);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        saveDB->setText(QCoreApplication::translate("MainWindow", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        saveDB->setToolTip(QCoreApplication::translate("MainWindow", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        saveDB->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        readDB->setText(QCoreApplication::translate("MainWindow", "\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        readDB->setToolTip(QCoreApplication::translate("MainWindow", "\321\207\320\270\321\202\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        readDB->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        about_me->setText(QCoreApplication::translate("MainWindow", "\320\276 \320\260\320\262\321\202\320\276\321\200\320\265", nullptr));
        calculate->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\320\264\321\201\321\207\321\221\321\202", nullptr));
        clear_table->setText(QCoreApplication::translate("MainWindow", "\320\276\321\207\320\270\321\201\321\202\320\272\320\260 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", nullptr));
        add_characteristic->setText(QCoreApplication::translate("MainWindow", "\320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\207\321\202\320\270\320\272\320\270", nullptr));
        delete_product->setText(QCoreApplication::translate("MainWindow", "\321\203\320\264\320\260\320\273\320\265\320\275\320\270\320\270\320\265 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214: \320\275\320\265\321\202", nullptr));
        delete_characteristic->setText(QCoreApplication::translate("MainWindow", "\321\203\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\270", nullptr));
        add_product->setText(QCoreApplication::translate("MainWindow", "\320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\321\204\320\260\320\271\320\273", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
