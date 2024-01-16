/********
 * Fichier: forme.cpp
 * Auteurs: Charles Poulin-Bergevin Pouc1302, Clovis Langevin Lanc0902
 * Date: 04 janvier 2024 (creation)
 * Modififé le: 16 janvier 2024
 * Description: Implementation des methodes des classes decrites dans
 *    cercle.h.
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#include "forme.h"
#include "cercle.h"

using namespace std;

Cercle::Cercle() : Forme(0,0)
{
	rayon = 1;
}
Cercle::Cercle(int Rayon, Coordonnee Ancrage) : Forme(Ancrage.x, Ancrage.y)
{
	rayon = Rayon;
}
Cercle::~Cercle()
{
}
  
int Cercle::getRayon()
{
	return rayon;
}
void Cercle::setRayon(int Rayon)
{
	rayon = Rayon;
}
double Cercle::aire()
{
	Aire = rayon*rayon*M_PI;
	return Aire;
}
void Cercle::afficher(ostream & s)
{
	this->aire();
	s<< "Cercle (x=" << ancrage.x << ", y=" << ancrage.y << ", r=" << rayon << ", aire=" << Aire << ")";
}
