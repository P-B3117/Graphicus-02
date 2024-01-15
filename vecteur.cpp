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
#include "rectangle.h"

using namespace std;

Vecteur::Vecteur()
{
	size = 0;
	capacity = 2;
	array = new Forme*[2];
}

Vecteur::Vecteur( int Capacity )
{
	size = 0;
	capacity = Capacity;
	array = new Forme*[capacity];
}

Vecteur::~Vecteur()
{
	delete[] array;
}

Forme* Vecteur::getShape(int index) {
	return array[index];
}

int Vecteur::getSize() {
	return size;
}

int Vecteur::getCapacity() {
	return capacity;
}


bool Vecteur::doubleCapacity() {
	Forme* *tempArray;
	tempArray = new Forme*[2*capacity];
	
	for (int i = 0; i < size; i++) *tempArray[i] = *array[i];
	
	delete array;
	array = tempArray;
	
	capacity *= capacity;
	
	return true;
}


bool Vecteur::isEmpty() {
	if ( size == 0 ) return true;
	else return false;
}

bool Vecteur::empty() {

	for (int i = size; i > 0; i--) {
		delete array[i];
		size--;
	}

	return true;
}

bool Vecteur::add(Forme *Shape) {
	if (Shape == NULL) return false;

	if ( size == capacity ) doubleCapacity();
	

	array[size] = Shape;
	size++;

	return true;
}

bool Vecteur::remove(int  index) {
	if (index > size - 1 or index < 0) return false;
	
	Forme* tempShape1 = array[size - 1];
	Forme* tempShape2;

	for (int i = size - 1; i >= 0; i--) {
	tempShape1 = array[i];
	delete array[i];
	if (i == index) break;
	tempShape2 = array[i-1];
	array[i - 1] = tempShape1;
	
	} 
	
	return true;
}

void Vecteur::print(ostream & s) {
	
	for (int i = 0; i < size; i++) { array[i]->afficher(s);	s <<endl; }
}
