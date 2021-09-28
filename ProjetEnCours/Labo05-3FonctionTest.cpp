/* But : Tester toutes les fonctions de notre bibliothèque
// Auteur :  Karine Moreau
// Date : 2021-09-28
*/
#include <iostream>
#include "Labo05-Fonctions.h"


using namespace std;


int main()
{
   setlocale(LC_ALL, "");         

   // TODO : Déclaration des constantes

   // TODO : Déclaration des variables
   double nb1;
   double nb2;
   double nb3;
   int factorielle;




   cout << "============= Test de la fonction calculerMax ====================" << endl;
   // Demander à l'utilisateur 3 nombres et appeler la fonction calculerMax qui retourne le plus grand des 3 nombres 
   // qui sont passés en paramètre à la fonction
   cout << " Veuillez entrer un nombre entier : ";
   cin >> nb1;
   cout << " Veuillez entrer un nombre entier : ";
   cin >> nb2;
   cout << " Veuillez entrer un nombre entier : ";
   cin >> nb3;

   cout << " Le maximum des 3 nombres est " << calculerMax(nb1, nb2, nb3) << endl;


   cout << "============= Test de la fonction calculerFactorielle ====================" << endl;
   // Demander à l'utilisateur 1 nombre et appeler la fonction calculerFactorielle 
  
   cout << " Veuillez entrer un nombre entier : ";
   cin >> factorielle;

   if (factorielle >= 0)
      cout << " la factorielle de  " << factorielle << " est " << calculerFactorielle(factorielle) << endl;
   else
      cout << "la factorielle ne se calcule que pour des nombres entiers positifs" << endl;


  

   system("pause");
   return 0;
}

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




