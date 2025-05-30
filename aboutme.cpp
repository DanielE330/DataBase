#include "aboutme.h"
#include "ui_aboutme.h"

AboutMe::AboutMe(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::AboutMe)
{
    ui->setupUi(this);
    setWindowTitle("Об авторе");
    setFixedSize(300, 200);

    // Установите текст и выравнивание внутри QLabel
    ui->label->setText("Имя: Эззо Даниэль\nEmail: daniel.m.e330@gmail.com\nВерсия: 0.1");
    ui->label->setAlignment(Qt::AlignCenter); // Выравнивание текста по центру

    // Создайте менеджер компоновки и добавьте в него label
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(ui->label, 0, Qt::AlignCenter); // Выравнивание виджета по центру окна
}

AboutMe::~AboutMe()
{
    delete ui;
}
