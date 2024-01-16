/********
 * Fichier: graphicus-01.cpp
 * Auteurs: C.-A. Brunet
 * Date: 04 janvier 2024 (creation)
 * Modifie par : Charles Poulin-Bergevin
 * Date : 16 Janvier 2024
 * Description: gestionnaire de tests pour l'application Graphicus. Ce
 *    fichier fait partie de la distribution de Graphicus.
********/
#include "tests.h"
#include <fstream>

using namespace std;

int main()
{
   Tests tests;
   char input = '0';
   ofstream logFile("test.log");
   
   do{
   cout <<"\nQuels tests voulez-vous effectuer?\n";
   
   cout <<"1: tests unitaires de formes\n";
   cout <<"2: tests unitaires de vecteurs\n";
   cout <<"3: tout les tests unitaires\n";
   cout <<"4: le test de validation complet\n";
   cout <<"5: des fichiers logs des tests\n";
   cout <<"Q: quitter\n";
   
   cin >>input;
   
   cout <<endl;
   
   switch (input) {
   
   case '1': tests.tests_unitaires_formes(cout);
   break;
   
   case '2': tests.tests_unitaires_vecteur(cout);
   break;
   
   case '3': tests.tests_unitaires(cout);
   break;
   
   case '4': tests.tests_application_cas_01(cout);
   break;
   
   case '5': tests.tests_application_cas_02(logFile);
   break;
   }
   
   } while (input != 'q' && input != 'Q');
   
   logFile.close();
   
   return 0;
}

