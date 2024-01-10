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
#include <iostream>

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
	if(state != 1)
	{
		return false
	}
	else
	{
		return vecteur.add(forme);
	}
	
}

Forme* removeForme(int index)
{
	if(state != 1)
	{
		return false
	}
	else
	{
		return vecteur.remove(index);
	}
	
}
Forme* getForme(int index)
{
	return vecteur.getShape(index);
}
bool translateCouche(int x, int y)
{
	if(state != 1)
	{
		return false;
	}
	else
	{
		int grandeur;
		grandeur = vecteur.getSize();
		Forme forme;
	
		for(int i = 0; i < grandeur; i++)
		{
			forme = vecteur.getShape(i);
			forme.translater(x,y);
		}
	}
}
bool reinitialise()
{
	state = 0;
	return vecteur.empty();
	
}
bool stateChange(int State)
{
	if(State == 1 || State == 2)
	{
		state = State;
		return true;
	}
	else
	{
		return false;
	}
	
}
void afficher(ostream flot)
{
	if(state == 0)
	{
		cout << "État: initialisée" << endl << "Couche: Vide";
	}
	else if(state == 1)
	{
		cout << "État: active" << endl << vecteur.print(flot);
	}
	else if(state == 2)
	{
		cout << "État: inactive" << endl << vecteur.print(flot);
	}
}






