/********
 * Fichier: couche.h
 * Auteurs: Clovis Langevin Charles Poulain-Bergevin
 * Date: 04 janvier 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H

#include "vecteur.h"
#include "forme.h"

using namespace std;

class Couche
{
public:
   Couche();
   ~Couche();
   
   bool addForme(Forme* forme);
   Forme* removeForme(int index);
   Forme* getForme(int index);
   bool translateCouche(int x, int y);
   bool reinitialise();
   bool stateChange(int State);
   void afficher(ostream flot);
   


private:

   Vecteur vecteur;
   int state;
};

#endif
