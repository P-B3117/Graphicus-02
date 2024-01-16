/********
 * Fichier: couche.cpp
 * Auteurs: Clovis Langevin Charles Poulin-Bergevin
 * Date: 15 janvier 2024 (creation)
 * Modififé le: 16 janvier 2024
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"
#include "forme.h"
#include <iostream>

using namespace std;

Couche::Couche()
{
	state = 0;
}
Couche::~Couche()
{
}

bool Couche::addForme(Forme* forme)
{
	if(state != 1)
	{
		return false;
	}
	else
	{
		return vecteur.add(forme);
	}
}

bool Couche::removeForme(int index)
{
	if(state != 1)
	{
		return false;
	}
	else
	{
		return vecteur.remove(index);
	}
	
}
Forme* Couche::getForme(int index)
{
	return vecteur.getShape(index);
}
bool Couche::translateCouche(int x, int y)
{
	if(state != 1)
	{
		return false;
	}
	
		int grandeur = vecteur.getSize();
		Forme* forme;
	
		for(int i = 0; i < grandeur; i++)
		{
			forme = vecteur.getShape(i);
			forme->translater(x,y);
		}
	return true;
}
bool Couche::reinitialise()
{
	state = 0;
	return vecteur.empty();
	
}
bool Couche::stateChange(int State)
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
void Couche::afficher(ostream & s)
{
	if(state == 0)
	{
		cout << "État: initialisée" << endl << "Couche: Vide" <<endl;
	}
	else if(state == 1)
	{
		s << "État: active" << endl;
		vecteur.print(s);
	}
	else if(state == 2)
	{
		cout << "État: inactive" << endl;
		vecteur.print(s);
	}
}
double Couche::aire()
{
	double AireTotal = 0;
	int grandeur = vecteur.getSize();
	for(int i = 0; i < grandeur; i++)
	{
		AireTotal += vecteur.getShape(i)->aire();
	}
	
	return AireTotal;
}





