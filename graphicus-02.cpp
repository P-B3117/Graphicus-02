/********
 * Fichier: graphicus-01.cpp
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : ...
 * Date : ...
 * Description: gestionnaire de tests pour l'application Graphicus. Ce
 *    fichier fait partie de la distribution de Graphicus.
********/
#include "tests.h"

using namespace std;

int main()
{
   Tests tests;
   char input = '0';
   
   do{
   cout <<"\nQuels tests voulez-vous effectuer?\n";
   
   cout <<"1: tests unitaires de formes\n";
   cout <<"2: tests unitaires de vecteurs\n";
   cout <<"3: tout les tests unitaires\n";
   cout <<"4: le test d'application complet\n";
   cout <<"Q: quitter\n";
   
   cin >>input;
   
   cout <<endl;
   
   switch (input) {
   
   case '1': tests.tests_unitaires_formes();
   break;
   
   case '2': tests.tests_unitaires_vecteur();
   break;
   
   case '3': tests.tests_unitaires();
   break;
   
   case '4': tests.tests_application_cas_01();
   break;
   }
   
   } while (input != 'q' && input != 'Q');
   
   return 0;
}

