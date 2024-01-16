/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Modififé le: 16 janvier 2024
 * Modifié par: Charles Poulin-Bergevin et Clovis Langevin
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"

#define VALEUR_1 3
#define VALEUR_2 5

using namespace std;

void Tests::tests_unitaires_formes(ostream & s)
{
   // Tests sur les formes geometriques
   Rectangle rectangle;
   Carre carre;
   Cercle cercle;
   Coordonnee coo; coo.x = VALEUR_1; coo.y = VALEUR_2;
   
   cercle.setRayon(VALEUR_1);
   carre.setLongueur(VALEUR_1);
   rectangle.setLargeur(VALEUR_1);
   rectangle.setHauteur(VALEUR_2);
   cercle.setAncrage(coo);
   carre.setAncrage(coo);
   rectangle.setAncrage(coo);
   
   if (cercle.getRayon() != VALEUR_1) s <<"cercle ne gere pas bien les rayons\n";
   else s <<"cercle gere bien son rayon\n";
   
   if (carre.getLongeur() != VALEUR_1) s <<"carre ne gere pas bien sa longueur\n";
   else s <<"carre gere bien sa longeur\n";
   
   if (rectangle.getLargeur() != VALEUR_1 or rectangle.getHauteur() != VALEUR_2) s <<"rectangle ne gere pas bien ses dimensions\n";
   else s <<"rectangle gere bien ses dimensions\n";
   
   if (cercle.aire() != VALEUR_1*VALEUR_1*M_PI) s <<"l'aire du cercle est incorrecte";
   else s <<"l'aire du cercle est correcte\n";
   
   if (carre.aire() != VALEUR_1*VALEUR_1) s <<"l'aire du carre est incorrecte";
   else s <<"l'aire du carre est correcte\n";
   
   if (rectangle.aire() != VALEUR_1*VALEUR_2) s <<"l'aire du rectangle est incorrecte";
   else s <<"l'aire du rectangle est correcte\n";
   
   if (cercle.getAncrage().x != coo.x or cercle.getAncrage().y != coo.y) s <<"l'ancrage du cercle est incorrecte\n";
   else s <<"l'ancrage du cercle est correct\n";
   
   if (carre.getAncrage().x != coo.x or carre.getAncrage().y != coo.y) s <<"l'ancrage du carre est incorrecte\n";
   else s <<"l'ancrage du carre est correct\n";
   
   if (rectangle.getAncrage().x != coo.x or rectangle.getAncrage().y != coo.y) s <<"l'ancrage du rectangle est incorrecte\n";
   else s <<"l'ancrage du rectangle est correct\n";
   
}

void Tests::tests_unitaires_vecteur(ostream & s)
{
   // Tests sur la classe Vecteur
   Rectangle* rectangle = new Rectangle;
   Carre* carre = new Carre;
   Cercle* cercle = new Cercle;
   Coordonnee coo; coo.x = VALEUR_1; coo.y = VALEUR_2;
   Vecteur vecteur;
   
   cercle->setRayon(VALEUR_1);
   carre->setLongueur(VALEUR_1);
   rectangle->setLargeur(VALEUR_1);
   rectangle->setHauteur(VALEUR_2);
   cercle->setAncrage(coo);
   carre->setAncrage(coo);
   rectangle->setAncrage(coo);
   
   vecteur.add(cercle);
   vecteur.add(carre);
   vecteur.add(rectangle);
   
   if (vecteur.getShape(0) != cercle) s <<"le cercle n'as pas été ajouté correctement\n";
   else s <<"le cercle a été ajouté correctement\n";
   
   if (vecteur.getShape(1) != carre) s <<"le carre n'as pas été ajouté correctement\n";
   else s <<"le carre a été ajouté correctement\n";
   
   if (vecteur.getShape(2) != rectangle) s <<"le rectangle n'as pas été ajouté correctement\n";
   else s <<"le rectangle a été ajouté correctement\n";
   
   s <<"on enleve le cercle (index 1)\n";
   vecteur.remove(1);
   
   if (vecteur.getSize() != 2) s <<"la taille n'est pas gere correctement\n";
   else s <<"la taille est bien gere\n";
   
   vecteur.doubleCapacity();
   
   if (vecteur.getCapacity() != 8) s <<"la capacite du vecteur n'est pas bien gere\n";
   else s <<"la capacite du vecteur est bien gere\n";
   
   if (vecteur.isEmpty()) s <<"la fonction isEmpty() gere mal les cas ou le vecteur n'est pas vide\n";
   else s <<"la fonction isEmpty() gere bien les cas ou le vecteur n'est pas vide\n";
   
   vecteur.empty();
   
   if (!vecteur.isEmpty()) s <<"le vecteur est vidé et ne se considère pas vide";
   else s <<"le vecteur est vidé et se considère vide\n";
   
   if (vecteur.getSize() != 0) s <<"le vecteur est vidée mais la taille n'est pas à 0\n";
   else s <<"le vecteur est vidé et la taille est de 0\n";
   
   
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
}

void Tests::tests_unitaires(ostream & s)
{
   // Fait tous les tests unitaires
   tests_unitaires_formes(s);
   tests_unitaires_vecteur(s);
   //tests_unitaires_couche();
   //tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01(cout);
   tests_application_cas_02(cout);
}

void Tests::tests_application_cas_01(ostream & s)
{
   Canevas canevas;
   Coordonnee coo;
   coo.x = 0; coo.y = 1;
   

   s << "TESTS APPLICATION (CAS 01)" << endl;
   
   s <<endl <<"Etape 1" << endl;
   
   s <<"activer la couche 2" <<endl;
   //activer la couche 2
   
   canevas.activerCouche(2);
   
   //ajouter le cercle
   s <<"ajouter le cercle" <<endl;
   
   Cercle* cercle = new Cercle(5, coo);
   canevas.ajouterForme(cercle);
   
   //ajouter le carré
   s <<"ajouter le carré" <<endl;
   
   coo.x = 1; coo.y = 2;
   Carre* carre = new Carre(6, coo);
   canevas.ajouterForme(carre);
   
   //ajouter le rectangle
   s <<"ajouter le rectangle" <<endl;
   
   coo.x = 2; coo.y = 3;
   Rectangle* rectangle;
   rectangle = new Rectangle(4, 9, coo);
   
   canevas.ajouterForme(rectangle);
   
   //activer la couche 1
   s <<"activer la couche 1" <<endl;
   
   canevas.activerCouche(1);
   
   s <<endl <<"Etape 2" << endl;
   
   s <<"ajouter le rectangle" <<endl;
   
   rectangle = new Rectangle;
   rectangle->setHauteur(3);
   rectangle->setLargeur(12);
   coo.x = 1; coo.y = 2;
   rectangle->setAncrage(coo);
   canevas.ajouterForme(rectangle);
   
   s <<endl <<"Etape 3" << endl;
   
   s <<"afficher le canevas" <<endl;
   
   canevas.afficher(s);
   
   s <<endl <<"Etape 4" << endl;
   
   s <<"afficher l'aire du canevas" <<endl;
   
   s <<"aire du canevas: " <<canevas.aire() <<endl;
   
   s <<endl <<"Etape 5" << endl;
   
   s <<"activer la couche 0" <<endl;
   
   canevas.activerCouche(0);
   
   s <<"ajouter le rectangle" <<endl;
   
   coo.x = 0; coo.y = 0;
   rectangle = new Rectangle(1, 1, coo);
   canevas.ajouterForme(rectangle);
   
   s <<"ajouter le carre" <<endl;
   
   carre = new Carre(1, coo);
   canevas.ajouterForme(carre);
   
   s <<"ajouter le cercle" <<endl;
   
   cercle = new Cercle(1, coo);
   canevas.ajouterForme(cercle);
   
   s <<endl <<"Etape 6" << endl;
   
   s <<"activer couche 2" <<endl;
   
   canevas.activerCouche(2);
   
   s <<"translater" <<endl;
   
   canevas.translater( 2, 1);
   
   s <<endl <<"Etape 7" << endl;
   
   s <<"afficher le canevas" <<endl;
   
   canevas.afficher(s);
   
   s <<endl <<"Etape 8" << endl;
   
   s <<"afficher l'aire du canevas" <<endl;
   
   s <<"aire du canevas: " <<canevas.aire() <<endl;
   
   s <<endl <<"Etape 9" << endl;
   
   s <<"activer la couche 0" <<endl;
   
   canevas.activerCouche(0);
   
   s <<"retirer la forme 1" <<endl;
   
   canevas.retirerForme(1);
   
   s <<"afficher le canevas" <<endl;
   
   canevas.afficher(s);
   
   s <<endl <<"Etape 10" << endl;
   
   s <<"reinitialiser la couche 1" <<endl;
   
   canevas.reinitialiserCouche(1);
   
   s <<endl <<"Etape 11" << endl;
   
   s <<"activer la couche 4" <<endl;
   
   canevas.activerCouche(4);
   
   s <<endl <<"Etape 12" << endl;
   
   s <<"afficher le canevas" <<endl;
   
   canevas.afficher(s);
   
   s <<endl <<"Etape 13" << endl;
   
   s <<"afficher l'aire du canevas" <<endl;
   
   s <<"aire du canevas: " <<canevas.aire() <<endl;
   
   s <<endl <<"Etape 14" << endl;
   
   s <<"reinitialiser le canevas" <<endl;
   
   canevas.reinitialiser();
   
   s <<endl <<"Etape 15" << endl;
   
   s <<"afficher le canevas" <<endl;
   
   canevas.afficher(s);
   
   s <<endl <<"Etape 16" << endl;
   
   s <<"afficher l'aire du canevas" <<endl;
   
   s <<"aire du canevas: " <<canevas.aire() <<endl;   
   
   s <<endl <<"Etape 17" << endl;
   
   s <<"activer la couche 3" <<endl;
   
   canevas.activerCouche(3);
   
   s <<"ajouter le carre" <<endl;
   
   coo.x = 10; coo.y = 10;
   carre = new Carre(10, coo);
   canevas.ajouterForme(carre);
   
   s <<"ajouter la forme NULL" <<endl;
   
   canevas.ajouterForme(nullptr);
   
   s <<endl <<"Etape 18" << endl;
   
   s <<"activer la couche 6" <<endl;
   
   canevas.activerCouche(6);
   
   s <<endl <<"Etape 19" << endl;
   
   s <<"afficher le canevas" <<endl;
   
   canevas.afficher(s);   
   
   s <<endl <<"Etape 20" << endl;
   
   s <<"aire du canevas" <<endl;
   
   s <<"aire du canevas: " <<canevas.aire() <<endl;
}

void Tests::tests_application_cas_02(ostream & s)
{
   cout <<endl << "TESTS APPLICATION envoyé vers tests.log" << endl;
    // Il faut ajouter les operations realisant ce scenario de test.
    tests_unitaires(s);
    tests_application_cas_01(s);
    
}
