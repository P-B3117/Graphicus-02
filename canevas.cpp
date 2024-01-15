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
	for (int i = 0; i < MAX_COUCHES; i++) couches[i];
	couches[0].stateChange(1);
	numActive = 0;
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
	for (int i = 0; i < MAX_COUCHES; i++) couches[i].reinitialise();
	//delete this;
	//this = new Canevas();
   return true;
}

bool Canevas::reinitialiserCouche(int index)
{
	if ( index >= MAX_COUCHES or index < 0 or index == numActive) return false;
	
	couches[index].reinitialise();
   return true;
}

bool Canevas::activerCouche(int index)
{
	if (index >= MAX_COUCHES or index < 0) return false;
	
	couches[numActive].stateChange(2);
	couches[index].stateChange(1);
	numActive = index;
	
   return true;
}

bool Canevas::desactiverCouche(int index)
{
	couches[index].stateChange(2);
   return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
cout << numActive << endl;
couches[numActive].afficher(cout);
   return couches[numActive].addForme(p_forme);
}

bool Canevas::retirerForme(int index)
{
   return couches[numActive].removeForme(index);
}

double Canevas::aire()
{
   return couches[numActive].aire();
}

bool Canevas::translater(int deltaX, int deltaY)
{
   return couches[numActive].translateCouche(deltaX, deltaY);
}

void Canevas::afficher(ostream & s)
{
	for (int i = 0; i < MAX_COUCHES; i++) couches[i].afficher(s);
}
