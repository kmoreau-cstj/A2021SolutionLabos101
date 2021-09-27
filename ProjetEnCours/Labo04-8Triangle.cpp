// But : Demander à l'utilisateur la hauteur de la forme
// Le programme dessine un triangle de la hauteur fournie par l'utilisateur
/*
Par exemple  : La hauteur est 7
le programme dessine le triangle suivant :
*
**
***
****
*****
******
*******

 
******* 
******
*****
****
***
**
* 

       *
      **
     ***
    ****
   *****
  ******
 *******

 *******
  ******
   *****
    ****
     ***
      **
       *  

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
  

   cout << "Veuillez indiquer la hauteur du triangle : ";
   cin >> hauteur;

  

   // TODO : Le programme doit faire hauteur lignes et pour chaque ligne il doit afficher longueur *
   // TODO : Le programme utilise deux boucles for

   for (int ligne = 1; ligne <= hauteur; ligne++)
   {
      for (int etoile = 1 ; etoile <= hauteur; etoile++)
      {
         if (etoile <= hauteur-ligne+1)
         {
            cout << "*";
         }
         else
         {
            cout << " ";
         }
        
      }
      cout << endl;
   }

   for (int ligne = 1; ligne <= hauteur; ligne++)
   {
      for (int etoile = 1; etoile <= hauteur; etoile++)
      {
         if (etoile <= ligne)
         {
            cout << "*";
         }
         else
         {
            cout << " ";
         }

      }
      cout << endl;
   }

   for (int ligne = 1; ligne <= hauteur; ligne++)
   {
      for (int etoile = 1; etoile <= hauteur; etoile++)
      {
         if (etoile <= ligne)
         {
            cout << "*";
         }
         else
         {
            cout << " ";
         }

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
   


   




