/********
 * Fichier: carre.h
 * Auteurs: Clovis Langevin et Charles Poulin-Bergevin
 * Date: 09 janvier 2024 (creation)
 * Modififé le: 16 janvier 2024
 * Description: Implementation des methodes des classes decrites dans
 *    carre.h.
********/


#include <iostream>
#include "carre.h"

using namespace std;

Carre::Carre() : Rectangle()
{
}
Carre::Carre(int Longeur, Coordonnee Ancrage) : Rectangle(Longeur, Longeur, Ancrage)
{
}
Carre::~Carre()
{
}
  
int Carre::getLongeur()
{
	return hauteur;
}
void Carre::setLongueur(int Longueur)
{
	hauteur = Longueur;
	largeur = Longueur;
}
double Carre::aire()
{
	Aire = hauteur*largeur;
	return Aire;
}
void Carre::afficher(ostream & s)
{
	this->aire();
	s<< "Carre (x=" << ancrage.x << ", y=" << ancrage.y << ", c=" << hauteur << ", aire=" << Aire << ")";
}
