/********
 * Fichier: rectangle.cpp
 * Auteurs: Clovis Langevin et Charles Poulain-Bergevin
 * Date: 09 janvier 2024 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    rectangle.h.
********/


#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle() : Forme()
{
  hauteur = 1;
  largeur = 1;
}
Rectangle::Rectangle(int Largeur, int Hauteur, Coordonnee Ancrage) : Forme(Ancrage.x, Ancrage.y)
{
  hauteur = Hauteur;
  largeur = Largeur;
}
Rectangle::~Rectangle()
{
}
  
int Rectangle::getLargeur()
{
  return largeur;
}
void Rectangle::setLargeur(int Largeur)
{
  largeur = Largeur;
}
  
int Rectangle::getHauteur()
{
  return hauteur;
}
void Rectangle::setHauteur(int Hauteur)
{
  hauteur = Hauteur;
}
double Rectangle::aire()
{
   Aire = hauteur*largeur;
   return Aire;
}
void Rectangle::afficher(ostream & s)
{
   s<< "Rectangle (x=" << ancrage.x << ", y=" << ancrage.y << ", l=" << largeur << ", h=" << hauteur << ", aire=" << Aire << ")";
}






