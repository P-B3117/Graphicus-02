/********
 * Fichier: forme.cpp
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    forme.h. Les methodes de la classe Forme ne doivent pas etre
 *    modifiees. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "forme.h"
#include "cercle.h"
#include <math.h>

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
void Cercle::setRayon(int Rayon, Coordonnee Ancrage)
{
	rayon = Rayon;
}
double Cercle::aire()
{
	Aire = 2*rayon*M_PI;
	return Aire;
}
void Cercle::afficher(ostream & s)
{
s<< "Cercle (x=" << ancrage.x << ", y=" << ancrage.y << ", r=" << rayon << ", aire=" << Aire << ")";
}
