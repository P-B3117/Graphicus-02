/********
 * Fichier: rectangle.h
 * Auteurs: Charles Poulin-Bergevin Pouc1302, Clovis Langevin Lanc0902
 * Date: 09 janvier 2024 (creation)
 * Modififé le: 16 janvier 2024
 * Description: Déclaration de la classe carre.
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef CARRE_H
#define CARRE_H

#include <iostream>
#include "rectangle.h"

using namespace std;

class Carre: public Rectangle
{
public:
  Carre();
  Carre(int Longeur, Coordonnee Ancrage);
  ~Carre();
  
  int getLongeur();
  void setLongueur(int Longueur);
  double aire();
  void afficher(ostream & s);

};

#endif
