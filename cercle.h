/********
 * Fichier: cercle.h
 * Auteurs: Clovis Langevin Charles Poulain-Bergevin
 * Date: 04 janvier 2024 (creation)
 * Description: Declaration des classes de formes geometriques. La
 *    classe Forme ne doit pas etre modifiee. Ce fichier fait partie de
 *    la distribution de Graphicus.
********/

#ifndef CERCLE_H
#define CERCLE_H

#include <iostream>
#include "forme.h"

using namespace std;

class Cercle: public Forme
{
public:
  Cercle();
  Cercle(int Rayon);
  ~Cercle();
  
  int getRayon();
  void setRayon(int Rayon, Coordonnee Ancrage);
  virtual double aire()
  virtual void afficher(ostream & s)
  
private:
  int rayon;
};

#endif
