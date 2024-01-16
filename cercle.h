/********
 * Fichier: cercle.h
 * Auteurs: Clovis Langevin Charles Poulin-Bergevin
 * Date: 15 janvier 2024 (creation)
 * Modififé le: 16 janvier 2024
 * Description: Declaration des fonction de cercle.h.
********/

#ifndef CERCLE_H
#define CERCLE_H

#include <iostream>
#include "forme.h"

#define M_PI 3.14159

using namespace std;

class Cercle: public Forme
{
public:
  Cercle();
  Cercle(int Rayon, Coordonnee Ancrage);
  ~Cercle();
  
  int getRayon();
  void setRayon(int Rayon);
  double aire();
  void afficher(ostream & s);
  
private:
  int rayon;
  double Aire = 0;
};

#endif
