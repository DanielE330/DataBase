/********************************************************************************
** Form generated from reading UI file 'aboutme.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTME_H
#define UI_ABOUTME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AboutMe
{
public:
    QLabel *label;

    void setupUi(QDialog *AboutMe)
    {
        if (AboutMe->objectName().isEmpty())
            AboutMe->setObjectName("AboutMe");
        AboutMe->resize(400, 300);
        label = new QLabel(AboutMe);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 140, 49, 16));

        retranslateUi(AboutMe);

        QMetaObject::connectSlotsByName(AboutMe);
    } // setupUi

    void retranslateUi(QDialog *AboutMe)
    {
        AboutMe->setWindowTitle(QCoreApplication::translate("AboutMe", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AboutMe", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutMe: public Ui_AboutMe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTME_H
