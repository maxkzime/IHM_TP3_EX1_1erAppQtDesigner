// TP3/EX1/person.cpp
// Exercice 1 : première application avec QtDesigner
// BODIN Maxime C2
// 22/03/27

#include "person.h"

Person::Person()
{}


QString Person::transformName(QString aFirstName)
{return aFirstName.toUpper();}
