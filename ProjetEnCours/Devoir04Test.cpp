/* But : Tester les fonctions du devoir 4
*  �crire une fonction qui re�oit trois param�tres, le num�ro du jour, le num�ro du mois et l�ann�e. A partir de ces
   informations, la fonction retourne vrai si la date est une date valide et faux dans le cas contraire. Le main demande
   ces trois valeurs � l�utilisateur tant que ces valeurs ne forment pas une date valide.

   �crire une fonction qui dessine un rectangle. Elle prend en param�tres la hauteur, la largeur de la forme et de savoir
si l�utilisateur souhaite avoir la forme pleine ou vide. Le caract�re de contour de la forme sera # et le caract�re de
remplissage sera *. Le main fournit les dimensions et le mode de remplissage de la forme � la fonction.


// Auteur :  Vincent Tr�panier
// Date : 2021-10-04
*/
#include <iostream>
#include "Devoir04.h"

using namespace std;


int main()
{
   setlocale(LC_ALL, "");  
   // TODO : D�claration des variables
   int hauteur;
   int largeur;
   char r�ponse;
 

   // Demander les informations � l'utilisateur
   cout << " Entrer la la hauteur : ";
   cin >> hauteur;

   cout << " Entrer la largeur : ";
   cin >> largeur;

   cout << " Est-ce que la forme doit �tre remplie ? (o/n) ";
   cin >> r�ponse;


   DessinerLaForme(hauteur, largeur, r�ponse == 'o' || r�ponse == 'O');

    






   
   
   /*
   int jour;
   int mois;
   int annee;

   cout << "Veuillez ins�rer le num�ro du jour : ";
   cin >> jour;
   cout << "\nVeuillez ins�rer le num�ro du mois : ";
   cin >> mois;
   cout << "\nVeuillez ins�rer le num�ro de l'ann�e : ";
   cin >> annee;
   while (!(ValiderDate(jour, mois, annee)))
   {
      cout << "La date n'est pas valide\n";
      cout << "Veuillez ins�rer le num�ro du jour : ";
      cin >> jour;
      cout << "\nVeuillez ins�rer le num�ro du mois : ";
      cin >> mois;
      cout << "\nVeuillez ins�rer le num�ro de l'ann�e : ";
      cin >> annee;
   }
   cout << "La date est valide\n";
   */

   system("pause");
   return 0;
}

//Plan de tests         �cran 
// 
   /*
    29-02-2021    false
    32-01-2021    false
    30-13-2021    false
    31-06-2021    false
    29-02-1900    false
    29-02-2000    true
   
   */
   


   




