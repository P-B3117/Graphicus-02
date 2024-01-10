/********
 * Fichier: vecteur.cpp
 * Auteurs: Charles Poulin Bergevin
 * Date: 08 janvier 2024 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    vecteur.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "vecteur.h"
#include "carre.h"
#include "cercle.h"
#include "triangle.h"

using namespace std;

Vecteur::Vecteur()
{
	size = 0;
	capacity = 2;
	item = new Item;
}

Vecteur::Vecteur( int Capacity )
{
	size = 0;
	capacity = Capacity;
	item = new Item;
}

Vecteur::~Vecteur()
{
	delete item;
}

Item* Vecteur::getItem(int index) {
	Item *tempItem = item;

	for (int i = 0; i < index; i++) {
		tempItem = tempItem->next;
	}

	return tempItem;
}

Forme* Vecteur::getShape(int index) {
	return getItem(index)->shape;
}

int Vecteur::getSize() {
	return size;
}

int Vecteur::getCapacity() {
	return capacity;
}


bool Vecteur::doubleCapacity() {
	Item *temp;
	int pos = size;
	size = 2 * size;
	
	for (int i = 0; i < size; i++) {
		temp = getItem(pos);
	}
	
	return true;
}


bool Vecteur::isEmpty() {
	if ( size == 0 ) return true;
	else return false;
}

bool Vecteur::empty() {
	Item *tempItem;
	Forme *tempShape;
	
	for (int i = size; i > 0; i--) {
		tempItem = getItem(size - 1);
		tempShape = tempItem->shape;
		delete tempShape;
		size--;
	}

	return true;
}

bool Vecteur::add(Forme *Shape) {
	if (Shape == NULL) return false;

	if ( size == capacity ) doubleCapacity();

	Item *tempItem = getItem(size - 1);

	tempItem->shape = Shape;

	return true;
}

bool Vecteur::remove(int  index) {
	if (index > size - 1) return false;

	if ( size == capacity ) doubleCapacity();

	Item *tempItem = getItem(index);
	Item *tempBefore;
	if (index > 0) {
	tempBefore = getItem(index - 1);
	tempBefore->next = tempItem->next;
	}
	
	else {
	item = item->next;
	}
	
	delete tempItem;
	
	return true;
}

void Vecteur::print(ostream & s) {
	
	for (int i = 0; i < size; i++) s << getShape(i).afficher() << endl;
}
