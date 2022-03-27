// TP3/EX1/widget.cpp
// Exercice 1 : première application avec QtDesigner
// BODIN Maxime C2
// 22/03/27

#include "widget.h"
#include "ui_widget.h"

#include "person.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::IHM)
{ui->setupUi(this);}

Widget::~Widget()
{delete ui;}


void Widget::on_button_released()
{
    Person p;
    ui->lGreetings->setText("Bonjour " + p.transformName(ui->leName->text()));
}

