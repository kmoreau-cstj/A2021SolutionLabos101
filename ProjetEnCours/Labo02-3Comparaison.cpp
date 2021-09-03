// But : ÈCRIRE UN PROGRAMME QUI DEMANDE A L'UTILISATEUR DEUX ENTIERS ET QUI DIT LEQUEL EST LE PLUS GRAND 
//OU SI LES NOMBRES SONT PAREILS 
// Auteur : Aya Zirou 
// Date : 2021-09-03

#include <iostream>

void main()
{ 
   // DÈclare mes variables 
   int nombreEntier1;
   int nombreEntier2; 
   // On affiche un message pour que l'utilisateur puisse rentrer un nombre entier 
   std::cout <<"Veuillez entrer un nombre entier:"; 
   // Lecture du nombre sur le clavier 
   std::cin >> nombreEntier1; 
   // On refait le meme processus 
   std::cout << "\n Veuillez entrer un deuxieme nombre entier:";
   std::cin >> nombreEntier2; 
   // On teste lequel des deux est le plus grand ( le nombre 1 dans ce cas ) 
   if (nombreEntier1 > nombreEntier2 )
   {
      std::cout << "le nombre entier 1 est plus grand que le nombre entier 2 : "; 
   }
   else
   {
      //On teste lequel des deux est le plus grand(le nombre 2 dans ce cas)
       if (nombreEntier1 < nombreEntier2) 
       {

         std::cout << "L'entier nombre 2 est plus grand que le nombre entier 1 ";
       }
      else
      {
         // On affiche un message pour dire que les deux nombres sont pareils
         std::cout << "Les nombres entiers sont egaux."; 
      }
      
   }
   system("pause");

//Plan de tests         Ècran 
// 5 : 5              les nombres sont Ègaux 
// 5:10               le nombre entier 2 est plus grand que le nombre entier 1 
// 10:5               le nombre entier 1 est plus grand que le nombre entier 2 
// -5:10              le nombre entier 2 est plus grand que le nombre entier 1 
// 1.25:4             erreur 
// -10 :-5            le nombre entier 2 est plus grand que le nombre entier 1 
// -5:-5              les nombres sont Ègaux 

   


   




}