/* But : Tester toutes les fonctions de notre biblioth�que
// Auteur :  Karine Moreau
// Date : 2021-09-28
*/
#include <iostream>
#include "Labo05-Fonctions.h"


using namespace std;


int main()
{
   setlocale(LC_ALL, "");         

   // TODO : D�claration des constantes

   // TODO : D�claration des variables
   int nb;
   double nb1;
   double nb2;
   double nb3;
   int factorielle;
   int jour;
   int mois;
   int annee;



   /*
   cout << "============= Test de la fonction calculerMax ====================" << endl;
   // Demander � l'utilisateur 3 nombres et appeler la fonction calculerMax qui retourne le plus grand des 3 nombres 
   // qui sont pass�s en param�tre � la fonction
   cout << " Veuillez entrer un nombre entier : ";
   cin >> nb1;
   cout << " Veuillez entrer un nombre entier : ";
   cin >> nb2;
   cout << " Veuillez entrer un nombre entier : ";
   cin >> nb3;

   cout << " Le maximum des 3 nombres est " << calculerMax(nb1, nb2, nb3) << endl;


   cout << "============= Test de la fonction calculerFactorielle ====================" << endl;
   // Demander � l'utilisateur 1 nombre et appeler la fonction calculerFactorielle 
  
   cout << " Veuillez entrer un nombre entier : ";
   cin >> factorielle;

   if (factorielle >= 0)
      cout << " la factorielle de  " << factorielle << " est " << calculerFactorielle(factorielle) << endl;
   else
      cout << "la factorielle ne se calcule que pour des nombres entiers positifs" << endl;
   

   cout << "============= Test de la fonction afficher la date en toute lettre d'une date (jour, mois et une ann�e) pass�e en param�tre ====================" << endl;
   // Demander � l'utilisateur trois informations sur la date : jour, moi et ann�e

   cout << " Veuillez entrer un num�ro de jour(1-31) : ";
   cin >> jour;

   cout << " Veuillez entrer un num�ro de mois (1-12) : ";
   cin >> mois;


   cout << " Veuillez entrer un num�ro d'ann�e (1592-...) : ";
   cin >> annee;




   // Appel de la fonction afficher date en toute lettre : 30, 9, 2021 ==> 30 septembre 2021
   cout << "nous sommes le ";
   afficherDateLongue(jour, mois, annee);
   cout << endl;
   */

   cout << "============= Test de la fonction qui dit oui ou non (vrai ou faux) le nombre pass� en param�tre est pair ====================" << endl;
   // Demander � l'utilisateur un nombre entier
   cout << "Veuillez entrer un nombre entier :";
   cin >> nb;

   // Appel de la fonction pour savoir si le nombre est pair
   if (etrePair(nb))
   {
      cout << nb << " est pair" << endl;
   }
   else
   {
      cout << nb << " est impair" << endl;
   }



  

   system("pause");
   return 0;
}

//Plan de tests         �cran 
// 
   /*
    
   
   
   
   */
   


   




