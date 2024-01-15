/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"

void Tests::tests_unitaires_formes()
{
   // Tests sur les formes geometriques
}

void Tests::tests_unitaires_vecteur()
{
   // Tests sur la classe Vecteur
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
   Coordonnee coo;
   coo.x = 0; coo.y = 1;
   

   cout << "TESTS APPLICATION (CAS 01)" << endl;
   
   cout <<"Etape 1" << endl;
   
   canevas.activerCouche(2);
   
   cout << "couche activee" << endl;
   
   Cercle* cercle = new Cercle(5, coo);
   cout << "cercle cree" << endl;
   canevas.ajouterForme(cercle);
   
   cout << "cercle ajoute" << endl;
   
   coo.x = 1; coo.y = 2;
   Carre* carre = new Carre(6, coo);
   cout << "caree cree" << endl;
   canevas.ajouterForme(carre);
   
   cout << "carre ajoute" << endl;
   
   coo.x = 2; coo.y = 3;
   Rectangle* rectangle = new Rectangle(4, 9, coo);
   
   cout << "rectangle cree" << endl;
   
   canevas.ajouterForme( rectangle );
   
   cout << "rectangle ajoute" << endl;
   
   
   
   cout <<"Etape 2" << endl;
   
   
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
