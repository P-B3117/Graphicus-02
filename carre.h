/********
 * Fichier: rectangle.h
 * Auteurs: Clovis Langevin et Charles Poulain-Bergevin
 * Date: 09 janvier 2024 (creation)
 * Description: Déclaration de la classe rectangle
********/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "rectangle.h"


class Carre: public Rectangle 
{
public:
  Carre();
  Carre(int Longeur, Coordonnee Ancrage);
  ~Carre();
  
  int getLongeur();
  void setLonguer(int Longueur);
  
private:
  int longeur;
};

#endif
