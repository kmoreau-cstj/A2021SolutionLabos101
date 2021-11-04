// But : Utiliser les vecteurs dans des fonctions
// 
// Auteur : Karine Moreau
// Date : 2021-11-04


#include "Labo09Fonctions.h"



int main()
{
   setlocale(LC_ALL, "");
  
   // Déclaration des constantes


   // Déclaration des variables
   vector<int> vecEntier{12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0};
   vector<char> vecVoyelle{ 'a', 'e', 'i','o', 'u', 'y' };
   vector<string> vecMot{ "Bonjour", "Salut", "Bienvenue", "Allo", "Hey man !" };
   vector <double> vecReel{ 3.14159, 9.81, 2.718281 };
   int nbZero = 0;

   cout << "Affichage d'un vecteur d'entiers : " << endl;
   afficherVecteur(vecEntier);

   cout << "Affichage d'un vecteur de voyelle : " << endl;
   afficherVecteur(vecVoyelle);

   cout << "Affichage d'un vecteur de mot : " << endl;
   afficherVecteur(vecMot);


   cout << "Affichage d'un vecteur de réels : " << endl;
   afficherVecteur(vecReel);


   cout << "Le nombre de 62 dans vecEntier est de " << calculerFrequence(vecEntier, 62) << endl;



   ajouterValeurALaFinVecteur(vecEntier, nbZero);      
   cout << "Après l'ajout de la valeur 105 à la fin du vecteur" << endl;
   afficherVecteur(vecEntier);


   system("pause");
   return 0;
}