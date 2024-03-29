/********
 * Fichier: tests.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Modififé le: 16 janvier 2024
 * Modififé par: Charles Poulin-Bergevin
 * Description: Declaration de la classe pour les tests de Graphicus.
 *    Ce fichier peut etre adapte a vos besoins de tests. Ce fichier
 *    fait partie de la distribution de Graphicus.
********/

#ifndef TESTS_H
#define TESTS_H

#include <iostream>
#include "canevas.h"
#include "carre.h"
#include "cercle.h"
#include "rectangle.h"

using namespace std;

class Tests
{
public:
   // Methodes pour les tests unitaires des classes
   void tests_unitaires_formes(ostream & s);
   void tests_unitaires_vecteur(ostream & s);
   void tests_unitaires_couche();
   void tests_unitaires_canevas();
   void tests_unitaires(ostream & s); // Appel de tous les tests unitaires

   // Methodes pour les tests unitaires des classes
   void tests_application_cas_01(ostream & s);
   void tests_application_cas_02(ostream & s);
   void tests_application(); // Appel de tous les tests applicatifs
};

#endif
