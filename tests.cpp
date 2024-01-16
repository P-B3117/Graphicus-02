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
   
   cout <<"aire du canevas: " <<canevas.aire() <<endl;
   
   cout <<"Etape 5" << endl;
   
   canevas.activerCouche(0);
   
   coo.x = 0; coo.y = 0;
   rectangle = new Rectangle(1, 1, coo);
   canevas.ajouterForme(rectangle);
   
   carre = new Carre(1, coo);
   canevas.ajouterForme(carre);
   
   cercle = new Cercle(1, coo);
   canevas.ajouterForme(cercle);
   
   cout <<"Etape 6" << endl;
   
   canevas.activerCouche(2);
   canevas.translater( 2, 1);
   
   cout <<"Etape 7" << endl;
   
   canevas.afficher(cout);
   
   cout <<"Etape 8" << endl;
   
   cout <<"aire du canevas: " <<canevas.aire() <<endl;
   
   cout <<"Etape 9" << endl;
   
   canevas.activerCouche(0);
   
   canevas.retirerForme(1);
   
   canevas.afficher(cout);
   
   cout <<"Etape 10" << endl;
   
   canevas.reinitialiserCouche(1);
   
   cout <<"Etape 11" << endl;
   
   canevas.activerCouche(4);
   
   cout <<"Etape 12" << endl;
   
   canevas.afficher(cout);
   
   cout <<"Etape 13" << endl;
   
   cout <<"Aire du canevas: " <<canevas.aire() <<endl;
   
   cout <<"Etape 14" << endl;
   
   canevas.reinitialiser();
   
   cout <<"Etape 15" << endl;
   
   canevas.afficher(cout);
   
   cout <<"Etape 16" << endl;
   
   canevas.aire();   
   
   cout <<"Etape 17" << endl;
   
   canevas.activerCouche(3);
   
   coo.x = 10; coo.y = 10;
   carre = new Carre(10, coo);
   canevas.ajouterForme(carre);
   
   canevas.ajouterForme(NULL);
   
   cout <<"Etape 18" << endl;
   
   canevas.activerCouche(6);
   
   cout <<"Etape 19" << endl;
   
   canevas.afficher(cout);   
   
   cout <<"Etape 20" << endl;
   
   cout <<"aire du canevas: " <<canevas.aire() <<endl;
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
