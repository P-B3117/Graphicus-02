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
   
   cout <<endl <<"Etape 1" << endl;
   
   cout <<"activer la couche 2" <<endl;
   //activer la couche 2
   
   canevas.activerCouche(2);
   
   //ajouter le cercle
   cout <<"ajouter le cercle" <<endl;
   
   Cercle* cercle = new Cercle(5, coo);
   canevas.ajouterForme(cercle);
   
   //ajouter le carré
   cout <<"ajouter le carré" <<endl;
   
   coo.x = 1; coo.y = 2;
   Carre* carre = new Carre(6, coo);
   canevas.ajouterForme(carre);
   
   //ajouter le rectangle
   cout <<"ajouter le rectangle" <<endl;
   
   coo.x = 2; coo.y = 3;
   Rectangle* rectangle;
   rectangle = new Rectangle(4, 9, coo);
   
   canevas.ajouterForme(rectangle);
   
   //activer la couche 1
   cout <<"activer la couche 1" <<endl;
   
   canevas.activerCouche(1);
   
   cout <<endl <<"Etape 2" << endl;
   
   cout <<"ajouter le rectangle" <<endl;
   
   rectangle = new Rectangle;
   rectangle->setHauteur(3);
   rectangle->setLargeur(12);
   coo.x = 1; coo.y = 2;
   rectangle->setAncrage(coo);
   canevas.ajouterForme(rectangle);
   
   cout <<endl <<"Etape 3" << endl;
   
   cout <<"afficher le canevas" <<endl;
   
   canevas.afficher(cout);
   
   cout <<endl <<"Etape 4" << endl;
   
   cout <<"afficher l'aire du canevas" <<endl;
   
   cout <<"aire du canevas: " <<canevas.aire() <<endl;
   
   cout <<endl <<"Etape 5" << endl;
   
   cout <<"activer la couche 0" <<endl;
   
   canevas.activerCouche(0);
   
   cout <<"ajouter le rectangle" <<endl;
   
   coo.x = 0; coo.y = 0;
   rectangle = new Rectangle(1, 1, coo);
   canevas.ajouterForme(rectangle);
   
   cout <<"ajouter le carre" <<endl;
   
   carre = new Carre(1, coo);
   canevas.ajouterForme(carre);
   
   cout <<"ajouter le cercle" <<endl;
   
   cercle = new Cercle(1, coo);
   canevas.ajouterForme(cercle);
   
   cout <<endl <<"Etape 6" << endl;
   
   cout <<"activer couche 2" <<endl;
   
   canevas.activerCouche(2);
   
   cout <<"translater" <<endl;
   
   canevas.translater( 2, 1);
   
   cout <<endl <<"Etape 7" << endl;
   
   cout <<"afficher le canevas" <<endl;
   
   canevas.afficher(cout);
   
   cout <<endl <<"Etape 8" << endl;
   
   cout <<"afficher l'aire du canevas" <<endl;
   
   cout <<"aire du canevas: " <<canevas.aire() <<endl;
   
   cout <<endl <<"Etape 9" << endl;
   
   cout <<"activer la couche 0" <<endl;
   
   canevas.activerCouche(0);
   
   cout <<"retirer la forme 1" <<endl;
   
   canevas.retirerForme(1);
   
   cout <<"afficher le canevas" <<endl;
   
   canevas.afficher(cout);
   
   cout <<endl <<"Etape 10" << endl;
   
   cout <<"reinitialiser la couche 1" <<endl;
   
   canevas.reinitialiserCouche(1);
   
   cout <<endl <<"Etape 11" << endl;
   
   cout <<"activer la couche 4" <<endl;
   
   canevas.activerCouche(4);
   
   cout <<endl <<"Etape 12" << endl;
   
   cout <<"afficher le canevas" <<endl;
   
   canevas.afficher(cout);
   
   cout <<endl <<"Etape 13" << endl;
   
   cout <<"afficher l'aire du canevas" <<endl;
   
   cout <<"aire du canevas: " <<canevas.aire() <<endl;
   
   cout <<endl <<"Etape 14" << endl;
   
   cout <<"reinitialiser le canevas" <<endl;
   
   canevas.reinitialiser();
   
   cout <<endl <<"Etape 15" << endl;
   
   cout <<"afficher le canevas" <<endl;
   
   canevas.afficher(cout);
   
   cout <<endl <<"Etape 16" << endl;
   
   cout <<"afficher l'aire du canevas" <<endl;
   
   cout <<"aire du canevas: " <<canevas.aire() <<endl;   
   
   cout <<endl <<"Etape 17" << endl;
   
   cout <<"activer la couche 3" <<endl;
   
   canevas.activerCouche(3);
   
   cout <<"ajouter le carre" <<endl;
   
   coo.x = 10; coo.y = 10;
   carre = new Carre(10, coo);
   canevas.ajouterForme(carre);
   
   cout <<"ajouter la forme NULL" <<endl;
   
   canevas.ajouterForme(nullptr);
   
   cout <<endl <<"Etape 18" << endl;
   
   cout <<"activer la couche 6" <<endl;
   
   canevas.activerCouche(6);
   
   cout <<endl <<"Etape 19" << endl;
   
   cout <<"afficher le canevas" <<endl;
   
   canevas.afficher(cout);   
   
   cout <<endl <<"Etape 20" << endl;
   
   cout <<"aire du canevas" <<endl;
   
   cout <<"aire du canevas: " <<canevas.aire() <<endl;
}

void Tests::tests_application_cas_02()
{
   cout <<endl << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
