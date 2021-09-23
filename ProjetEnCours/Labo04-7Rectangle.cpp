// But : Demander à l'utilisateur deux nombres entiers un pour la hauteur et un autre pour la longueur.
// Le programme dessine un rectangle aux dimensions fournies par l'utilisateur
/*
Par exemple  : La hauteur est 4 et la longueur est 7
le programme dessine le rectangle suivant :
*******
*******
*******
*******

 */
// Auteur :  Karine Moreau
// Date : 2021-09-21

#include <iostream>
#include <time.h>

using namespace std;


int main()
{
   setlocale(LC_ALL, "");
   // Déclaration des variables
   int hauteur;
   int longueur;

   cout << "Veuillez indiquer la hauteur du rectangle : ";
   cin >> hauteur;

   cout << "Veuillez indiquer la longueur du rectangle : ";
   cin >> longueur;


   // TODO : Le programme doit faire hauteur lignes et pour chaque ligne il doit afficher longueur *
   // TODO : Le programme utilise deux boucles for

   for (int ligne = 1; ligne <= hauteur; ligne++)
   {
      for (int etoile = 1 ; etoile <= longueur; etoile++)
      {
         cout << "*";
      }
      cout << endl;
   }







   system("pause");
   return 0;
}

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




