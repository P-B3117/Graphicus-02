/********
 * Fichier: rectangle.h
 * Auteurs: Clovis Langevin et Charles Poulain-Bergevin
 * Date: 09 janvier 2024 (creation)
 * Description: Déclaration de la classe rectangle
********/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "forme.h"
#include "coordonnee.h"


class Rectangle: public Forme
{
public:
  Rectangle();
  Rectangle(int Largeur, int Hauteur, Coordonnee Ancrage);
  ~Rectangle();
  
  int getLargeur();
  void setLargeur(int Largeur);
  
  int getHauteur();
  void setHauteur(int Hauteur);
  virtual double aire()
  virtual void afficher(ostream & s)
  
private:
  int hauteur;
  int largeur;
  double aire = 0;
};

#endif
