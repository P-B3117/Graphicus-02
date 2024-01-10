/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"

using namespace std;

Couche()
{
	state = 0;
}
~Couche()
{
}

bool addForme(Forme* forme)
{
	return vecteur.add(forme);
}

Forme* removeForme(int index)
{
	return vecteur.remove
}
Forme* getForme(int index)
{
	return vecteur.getShape(index);
}
bool translateCouche(int x, int y)
{
	int grandeur;
	grandeur = vecteur.getSize();
	Forme forme;
	
	for(int i = 0; i < grandeur; i++)
	{
		forme = vecteur.getShape(i);
		
	}
}
bool reinitialise();
bool stateChange(int state);
void afficher(ostream flot);
