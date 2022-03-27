// TP3/EX1/main.cpp
// Exercice 1 : première application avec QtDesigner
// BODIN Maxime C2
// 22/03/27

#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}


/*
 * 1. Quels sont les fichiers créés et quels sont leurs rôles ?
 *
 *  Un fichier widget.ui, pour gérer l'ui de l'application.
 *
 * 2. Où se situe le point d’entrée de l’application ?
 *
 *
 * 3. Que définit le document widget.ui ?
 *
 * La mise en forme des widgets.
 *
 * 4. Comment accéder aux éléments graphiques définis dans widget.ui dans la classe Widget ?
 *
 *
 * 5. De quel type est la variable ui ?
 *
 *
 * 6. Comment faire la différence entre Widget (w) et Widget (ui) ?
 *
 *
 */
