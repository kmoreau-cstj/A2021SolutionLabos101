/* But : créer notre propre fonction qui calcule le carré d'un nombre
* 1. Il faut créer notre bibliothèque
* 2. Dans la bibliothèque, il faut créer le prototype de la fonction : 
     mode d'emploi, comment utiliser la fonction, savoir son nom et les paramètres dont elle a besoin
* 3. il faut créer la définition de la fonction : de dire les instructions que la fonction doit exécuter
* 4. il faut appeler la fonction pour valider ou tester son fonctionnement
// Auteur :  Karine Moreau
// Date : 2021-09-27
*/
#include <iostream>
#include <time.h>
#include <math.h>
#include "Labo05FonctionMath.h"

using namespace std;


int main()
{
   setlocale(LC_ALL, "");         

   // TODO : Déclaration des constantes

   // TODO : Déclaration des variables
   double nb;

   cout << "Veuillez entrer un nombre pour calculer son carré : ";
   cin >> nb;

   cout << "Le carré de " << nb << " est " << calculerCarre(nb) << endl;
 


   system("pause");
   return 0;
}

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




