/* But : Tester les fonctions du devoir 4
*  Écrire une fonction qui reçoit trois paramètres, le numéro du jour, le numéro du mois et l’année. A partir de ces
   informations, la fonction retourne vrai si la date est une date valide et faux dans le cas contraire. Le main demande
   ces trois valeurs à l’utilisateur tant que ces valeurs ne forment pas une date valide.

   Écrire une fonction qui dessine un rectangle. Elle prend en paramètres la hauteur, la largeur de la forme et de savoir
si l’utilisateur souhaite avoir la forme pleine ou vide. Le caractère de contour de la forme sera # et le caractère de
remplissage sera *. Le main fournit les dimensions et le mode de remplissage de la forme à la fonction.


// Auteur :  Vincent Trépanier
// Date : 2021-10-04
*/
#include <iostream>
#include "Devoir04.h"

using namespace std;


int main()
{
   setlocale(LC_ALL, "");  
   // TODO : Déclaration des variables
   int hauteur;
   int largeur;
   char réponse;
 

   // Demander les informations à l'utilisateur
   cout << " Entrer la la hauteur : ";
   cin >> hauteur;

   cout << " Entrer la largeur : ";
   cin >> largeur;

   cout << " Est-ce que la forme doit être remplie ? (o/n) ";
   cin >> réponse;


   DessinerLaForme(hauteur, largeur, réponse == 'o' || réponse == 'O');

    






   
   
   /*
   int jour;
   int mois;
   int annee;

   cout << "Veuillez insérer le numéro du jour : ";
   cin >> jour;
   cout << "\nVeuillez insérer le numéro du mois : ";
   cin >> mois;
   cout << "\nVeuillez insérer le numéro de l'année : ";
   cin >> annee;
   while (!(ValiderDate(jour, mois, annee)))
   {
      cout << "La date n'est pas valide\n";
      cout << "Veuillez insérer le numéro du jour : ";
      cin >> jour;
      cout << "\nVeuillez insérer le numéro du mois : ";
      cin >> mois;
      cout << "\nVeuillez insérer le numéro de l'année : ";
      cin >> annee;
   }
   cout << "La date est valide\n";
   */

   system("pause");
   return 0;
}

//Plan de tests         écran 
// 
   /*
    29-02-2021    false
    32-01-2021    false
    30-13-2021    false
    31-06-2021    false
    29-02-1900    false
    29-02-2000    true
   
   */
   


   




