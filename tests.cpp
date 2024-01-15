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
   
   Cercle* cercle = new Cercle(5, coo);
   canevas.ajouterForme(cercle);
   
   coo.x = 1; coo.y = 2;
   Carre* carre = new Carre(6, coo);
   canevas.ajouterForme(carre);
   
   coo.x = 2; coo.y = 3;
   Rectangle* rectangle;
   rectangle = new Rectangle(4, 9, coo);
   rectangle->setAncrage(coo);
   rectangle->setHauteur(3);
   rectangle->setLargeur(12);
   
   canevas.ajouterForme(rectangle);
   
   canevas.activerCouche(1);
   
   cout <<"Etape 2" << endl;
   
   rectangle = new Rectangle;
   rectangle->setHauteur(3);
   rectangle->setLargeur(12);
   coo.x = 1; coo.y = 2;
   rectangle->setAncrage(coo);
   canevas.ajouterForme(rectangle);
   
   cout <<"Etape 3" << endl;
   
   canevas.afficher(cout);
   
   cout <<"Etape 4" << endl;
   
   cout <<canevas.aire() <<endl;
   
   
   cout <<"Etape 5" << endl;
   
   canevas.activerCouche(0)
   
   coo.x = 0; coo.y = 0;
   rectangle = new Rectangle(1, 1, coo);
   
   cout <<"Etape 6" << endl;
   
   
   
   cout <<"Etape 7" << endl;
   
   
   
   cout <<"Etape 8" << endl;
   
   
   
   cout <<"Etape 9" << endl;
   
   
   
   cout <<"Etape 10" << endl;
   
   
   
   cout <<"Etape 11" << endl;
   
   
   
   cout <<"Etape 12" << endl;
   
   
   
   cout <<"Etape 13" << endl;
   
   
   
   cout <<"Etape 14" << endl;
   
   
   
   cout <<"Etape 15" << endl;
   
   
   
   cout <<"Etape 16" << endl;
   
   
   
   cout <<"Etape 17" << endl;
   
   
   
   cout <<"Etape 18" << endl;
   
   
   
   cout <<"Etape 19" << endl;
   
   
   
   cout <<"Etape 20" << endl;
   
   
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
