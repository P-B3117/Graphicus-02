/********
 * Fichier: vecteur.cpp
 * Auteurs: Charles Poulin Bergevin
 * Date: 08 janvier 2024 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    vecteur.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "vecteur.h"

Vecteur::Vecteur()
{
	size = 0;
	capacity = 1;
	item = new Item;
	*item.index = 0;
}

Vecteur::~Vecteur()
{
	delete item;
}

int getSize() {
	return size;
}

int getCapacity() {
	return capacity;
}

bool doubleCapacity() {
	Item *temp;
	int pos = size;
	size = 2 * size;
	
	for (int i = 0; i < size; i++) {
		temp = getItem(pos);
	
	
	return true;
}

bool isEmpty() {
	if ( size == 0 ) return true;
	else return false;
}

bool empty() {
	Item *temp;
	
	for (int i = size; i > 0; i--) {
		temp = getItem(size);
		delete temp->shape;
		size--;
	}
}
