// TP3/EX1/widget.h
// Exercice 1 : première application avec QtDesigner
// BODIN Maxime C2
// 22/03/27

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class IHM; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_button_released();

private:
    Ui::IHM *ui;
};
#endif // WIDGET_H
