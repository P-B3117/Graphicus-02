/********reiin
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : Charles Poulin-Bergevin et Clovis Langevin
 * Date : 16 Janvier 2024
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
    int couchesVides = 0;
    
	for (int i = 0; i < MAX_COUCHES; i++) 
	{
	couchesVide += couches[i].reinitialise();
	}
	
	if (couchesVide == MAX_COUCHES) return false;
	
	couches[0].stateChange(1);
	
   return true;
}

bool Canevas::reinitialiserCouche(int index)
{
	if ( index >= MAX_COUCHES or index < 0 or index == numActive) return false;
	
	return couches[index].reinitialise();
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
	return couches[index].stateChange(2);
}

bool Canevas::ajouterForme(Forme *p_forme)
{
   return couches[numActive].addForme(p_forme);
}

bool Canevas::retirerForme(int index)
{
   return couches[numActive].removeForme(index);
}

double Canevas::aire()
{
    double total = 0;
    
    for (int i = 0; i < MAX_COUCHES; i++) total += couches[i].aire();

   return total;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   return couches[numActive].translateCouche(deltaX, deltaY);
}

void Canevas::afficher(ostream & s)
{
	for (int i = 0; i < MAX_COUCHES; i++) { cout <<"--- couche: " <<i <<" ---" <<endl; couches[i].afficher(s); }
}
