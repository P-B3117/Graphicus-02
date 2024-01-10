/********
 * Fichier: carre.h
 * Auteurs: Clovis Langevin et Charles Poulain-Bergevin
 * Date: 09 janvier 2024 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    carre.h.
********/


#include <iostream>
#include "carre.h"

using namespace std;

Carre::Carre() : Rectangle()
{
	longeur = 1;
}
Carre::Carre(int Longeur, Coordonnee Ancrage) : Rectangle(Longeur, Longeur, Angcrage)
{
	longeur = Longeur;
}
Carre::~Carre()
{
}
  
int getLongeur()
{
	return longeur;
}
void setLonguer(int Longueur)
{
	longeur = Longeur;
}
