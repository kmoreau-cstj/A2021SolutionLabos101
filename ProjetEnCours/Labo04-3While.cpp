// But : Le programme demande à l'utilisateur le nombre de départ et le nombre de fin. 
// Le programme doit compter du nombre de départ jusqu'au nombre de fin
// Nb de départ : 5
// nb de fin : 10
// Le programme affiche
// 5
// 6
// 7
// 8
// 9
// 10
// Auteur :  Karine Moreau
// Date : 2021-09-14

#include <iostream>

using namespace std;

void main()
{ 
   setlocale(LC_ALL, "");
  
   // Déclaration des constantes
   
   // Déclaration des variables
   int compteur;
   int nb_D = 0;
   int nb_F = 0;

   // Boucle for
   
   


      cout << "Veuiller enter un nombre de depart: ";
      cin >> nb_D;

      cout << "\nVeuiller entrer un nombre de fin (il doit etre plus grand que le nombre de depart): ";
      cin >> nb_F;
   
      if (nb_D > nb_F) {

         for (compteur = nb_D; compteur >= nb_F; compteur--)
         {

            cout << "\n" << compteur << "\n";

       
         }
      
      }
      else {

         for (compteur = nb_D; compteur <= nb_F; compteur++) {

            cout << "\n" << compteur << "\n";

         }

      }



   system("pause");

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




}