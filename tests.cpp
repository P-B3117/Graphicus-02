/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"

#define VALEUR_1 3
#define VALEUR_2 5

void Tests::tests_unitaires_formes()
{
   // Tests sur les formes geometriques
   Rectangle rectangle;
   Carre carre;
   Cercle cercle;
   Coordone coo; coo.x = VALEUR_1; coo.y = VALEUR_2;
   
   cercle.setRayon(VALEUR_1);
   carre.setLongeur(VALEUR_1);
   rectangle.setLargeur(VALEUR_1);
   rectangle.setHauteur(VALEUR_2);
   cercle.setAncrage(coo);
   carre.setAncrage(coo);
   rectangle.setAncrage(coo);
   
   if (cercle.getRayon() != VALEUR_1) cout <<"cercle ne gere pas bien les rayons\n";
   else cout <<"cercle gere bien son rayon\n";
   
   if (carre.getLongeur() != VALEUR_1) cout <<"carre ne gere pas bien sa longueur\n";
   else cout <<"carre gere bien sa longeur\n";
   
   if (rectangle.getLargeur != VALEUR_1 or rectangle.getHauteur != VALEUR_2) cout <<"rectangle ne gere pas bien ses dimensions\n";
   else cout <<"rectangle gere bien ses dimensions\n";
   
   if (cercle.aire() != VALEUR_1*VALEUR_1*M_PI) cout <<"l'aire du cercle est incorrecte";
   else cout <<"l'aire du cercle est correcte\n";
   
   if (carre.aire != VALEUR_1*VALEUR_1) cout <<"l'aire du carre est incorrecte";
   else cout <<"l'aire du carre est correcte\n";
   
   if (rectangle.aire != VALEUR_1*VALEUR_2) cout <<"l'aire du rectangle est incorrecte";
   else cout <<"l'aire du rectangle est correcte\n";
   
   if (cercle.getAncrage.x != coo.x or cercle.getAncrage.y != coo.y) cout <<"l'ancrage du cercle est incorrecte\n";
   else cout <<"l'ancrage du cercle est correct\n";
   
   if (carre.getAncrage.x != coo.x or carre.getAncrage.y != coo.y) cout <<"l'ancrage du carre est incorrecte\n";
   else cout <<"l'ancrage du carre est correct\n";
   
   if (rectangle.getAncrage.x != coo.x or rectangle.getAncrage.y != coo.y) cout <<"l'ancrage du rectangle est incorrecte\n";
   else cout <<"l'ancrage du rectangle est correct\n";
   
}

void Tests::tests_unitaires_vecteur()
{
   // Tests sur la classe Vecteur
   Rectangle rectangle;
   Carre carre;
   Cercle cercle;
   Coordone coo; coo.x = VALEUR_1; coo.y = VALEUR_2;
   Vecteur vecteur;
   
   cercle.setRayon(VALEUR_1);
   carre.setLongeur(VALEUR_1);
   rectangle.setLargeur(VALEUR_1);
   rectangle.setHauteur(VALEUR_2);
   cercle.setAncrage(coo);
   carre.setAncrage(coo);
   rectangle.setAncrage(coo);
   
   vecteur.add(&cercle);
   vecteur.add(&carre);
   vecteur.add(&rectangle);
   
   if (vecteur.getShape(0) != &cercle) cout <<"le cercle n'as pas été ajouté correctement\n";
   else cout <<"le cercle a été ajouté correctement\n";
   
   if (vecteur.getShape(1) != &carre) cout <<"le carre n'as pas été ajouté correctement\n";
   else cout <<"le cercle a été ajouté correctement\n";
   
   if (vecteur.getShape(2) != &rectangle) cout <<"le rectangle n'as pas été ajouté correctement\n";
   else cout <<"le cercle a été ajouté correctement\n";
   
   vecteur.remove(1);
   
   if (vecteur.getSize != 2) cout <<"la taille n'est pas gere correctement\n";
   else cout <<"la taille est bien gere\n";
   
   vecteur.doubleCapacity();
   
   if (vecteur.getcapacity() != 8) cout <<"la capacite du vecteur n'est pas bien gere\n";
   else cout <<"la capacite du vecteur est bien gere\n";
   
   
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
   Canevas canevas;
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
