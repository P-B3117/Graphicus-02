/********
 * Fichier: vecteur.h
 * Auteurs: Charles Poulin-Bergevin
 * Date: 08 janvier 2024 (creation)
 * Description: Declaration de la classe vecteur, la classe vecteur
 * 	gère un nombre de formes non-défini comme un tableau, donnant ainsi de la flexibilité
 *	à la quantitée de formes possible 
********/

#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>
#include "forme.h"

using namespace std;

class Vecteur
{
public:

   Vecteur();
   Vecteur(int Capacity);
   ~Vecteur();
   
   int getSize();
   int getCapacity();
   bool doubleCapacity();
   
   bool isEmpty();
   bool empty();
   
   bool add(Forme *Shape);
   bool remove(int index);
   Forme* getShape(int index);
   
   void print(ostream & s);
   

protected:   

   Forme* *array;
   int capacity;
   int size;

};

#endif
