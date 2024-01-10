/********reiin
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

Canevas::Canevas()
{
	for (int i = 0; i < MAX_COUCHES; i++) couches[i] = *(new Couche);
	couches[0].changeState(1);
	numActive = 0;
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
	for (int i = 0; i < MAX_COUCHES; i++) couches[i].reinitialise;
	//delete this;
	//this = new Canevas();
   return true;
}

bool Canevas::reinitialiserCouche(int index)
{
	if ( index >= MAX_COUCHES or index < 0 or index == numActive) return false;
	
	couches[index].reinitialise
   return true;
}

bool Canevas::activerCouche(int index)
{
	if (index >= MAX_COUCHES) return false;
	
	couches[numActive].changeState(0);
	couches[index].changeState(1);
	numActive = index;
	
   return true;
}

bool Canevas::desactiverCouche(int index)
{
	couches[index].changeState(2);
   return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
   return true;
}

bool Canevas::retirerForme(int index)
{
   return true;
}

double Canevas::aire()
{
   return 0.0;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   return true;
}

void Canevas::afficher(ostream & s)
{
}
