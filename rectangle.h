/********
 * Fichier: rectangle.h
 * Auteurs: Clovis Langevin et Charles Poulin-Bergevin
 * Date: 09 janvier 2024 (creation)
 * Modififé le: 16 janvier 2024
 * Description: Déclaration de la classe rectangle
********/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "forme.h"
#include "coordonnee.h"

using namespace std;


class Rectangle: public Forme
{
public:
  Rectangle();
  Rectangle(int Largeur, int Hauteur, Coordonnee Ancrage);
  virtual ~Rectangle();
  
  int getLargeur();
  void setLargeur(int Largeur);
  
  int getHauteur();
  void setHauteur(int Hauteur);
  virtual double aire();
  virtual void afficher(ostream & s);
protected:
  int hauteur;
  int largeur;
  double Aire = 0;
};

#endif
