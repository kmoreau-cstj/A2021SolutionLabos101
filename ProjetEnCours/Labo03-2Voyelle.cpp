// But : Demande à l'utilisateur une lettre et dire si la lettre est une voyelle ou une consonne
// Auteur :  Vincent Trépanier
// Date : 2021-09-07

#include <iostream>
//using namespace std;
void main()
{ 
   setlocale(LC_ALL, "");
   // Déclare mes variables 
   char lettre;

   
   // On affiche un message pour que l'utilisateur puisse rentrer une lettre
   std::cout <<"Veuillez entrer  une lettre :"; 
   // Lecture de la lettre sur le clavier 
   std::cin >>  lettre ; 
   // On s'assure que l'utilisateur a bien rentré une lettre, sinon on affiche un message d'erreur.

   if (lettre >= 'a' && lettre <= 'z' || lettre >= 'A' && lettre <= 'Z')
   {
      /*
      if (lettre == 'a' || lettre == 'e' || lettre == 'i' || lettre == 'o' || lettre == 'u' || lettre == 'y' ||
         lettre == 'A' || lettre == 'E' || lettre == 'I' || lettre == 'O' || lettre == 'U' || lettre == 'Y')
      {
         std::cout << lettre << " est une voyelle. \n";
      }
      else 
      {
         std::cout << lettre << " est une consonne. \n";
      
      }
      */
      // Si dans le if on compare toujours la même variable ici lettre et qu'on teste toujours égalite == alors
      // On peut utiliser un switch
      switch (lettre)
      {
      case 'a' :
      case 'e' :
      case 'i' :
      case 'o' :
      case 'u' :
      case 'y' :
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'Y':
         std::cout << lettre << " est une voyelle. \n";
         // A la fin du case, il  ne faut pas OUBLIER le BREAK;
         break;

      default:
      std::cout << lettre << " est une consonne. \n";
         break;
      }



   }
   else 
   {
      std::cout << "Erreur, il faut insérer une lettre. \n";
   }
 
   system("pause");

//Plan de tests         écran 
// TODO : A compléter
   /*
      lettre      écran

      a           voyelle
      b           consonne
      15          Erreur
   
   
   
   */
   


   




}