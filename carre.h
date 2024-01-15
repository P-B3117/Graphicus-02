/********
 * Fichier: rectangle.h
 * Auteurs: Clovis Langevin et Charles Poulain-Bergevin
 * Date: 09 janvier 2024 (creation)
 * Description: Déclaration de la classe rectangle
********/

#ifndef CARRE_H
#define CARRE_H

#include <iostream>
#include "rectangle.h"

using namespace std;

class Carre: public Rectangle
{
public:
  Carre(int Longeur, Coordonnee Ancrage);
  ~Carre();
  
  int getLongeur();
  void setLonguer(int Longueur);
  double aire();
  void afficher(ostream & s);

};

#endif
