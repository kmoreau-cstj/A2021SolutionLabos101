// But : Demande à l'utilisateur 3 entiers et dire lequel est le plus grand
// Auteur : Aya Zirou 
// Date : 2021-09-03

#include <iostream>
using namespace std;
void main()
{ 
   // Déclare mes variables 
   int nombreEntier1;
   int nombreEntier2;
   int nombreEntier3;

   
   // On affiche un message pour que l'utilisateur puisse rentrer un nombre entier 
   std::cout <<"Veuillez entrer un nombre entier:"; 
   // Lecture du nombre sur le clavier 
   std::cin >> nombreEntier1; 
 
   // On affiche un message pour que l'utilisateur puisse rentrer un nombre entier 
   std::cout << "Veuillez entrer un nombre entier:";
   // Lecture du nombre sur le clavier 
   std::cin >> nombreEntier2;

   // On affiche un message pour que l'utilisateur puisse rentrer un nombre entier 
   std::cout << "Veuillez entrer un nombre entier:";
   // Lecture du nombre sur le clavier 
   std::cin >> nombreEntier3;


   // Le programme doit déterminer lequel des 3 nombres est le plus grand

   if (nombreEntier1 > nombreEntier2 && nombreEntier1 > nombreEntier3)
   {
      cout << "Le nombreEntier1 est plus grand";

   }
   else
   {
      if (nombreEntier2 > nombreEntier3 && nombreEntier2 > nombreEntier1)
      {

      }
      else 
         if (nombreEntier3 > nombreEntier2 && nombreEntier3 > nombreEntier1)
      {

      }
   }
   
   }

      







   system("pause");

//Plan de tests         écran 
//
   


   




}