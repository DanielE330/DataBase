#include "aboutme.h"
#include "ui_aboutme.h"

AboutMe::AboutMe(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::AboutMe)
{
    ui->setupUi(this);
    setWindowTitle("Об авторе");
    setFixedSize(300, 200);

    ui->label->setText("Имя: Эззо Даниэль\nEmail: daniel.m.e330@gmail.com\nВерсия: 1.0.0");
    ui->label->setAlignment(Qt::AlignCenter);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(ui->label, 0, Qt::AlignCenter);
}

AboutMe::~AboutMe()
{
    delete ui;
}
