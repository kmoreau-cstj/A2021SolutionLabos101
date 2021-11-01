// But : générer des nombres aléatoires
// Auteur : Karine Moreau
// Date : 2021-10-26

#include "Labo08Fonctions.h"



int main()
{
   setlocale(LC_ALL, "");
   system("mode con lines=25 cols=80");
   // Déclaration des variables
   int alea;
   int min = 1;
   int max = 6;


   // Combien de fois est sorti le chiffre de 1 à 6
   int nb1 = 0;
   int nb2 = 0;
   int nb3 = 0;
   int nb4 = 0;
   int nb5 = 0;
   int nb6 = 0;


   // Déclaration des constantes

   //les nombres aléatoires sont stockés déjà mélangés dans un tableau et chaque ligne du tableau a un numéro que l'on appelle la graine ou seed
   // On peut choisir la graine : le numéro de la ligne de nombres aléatoires
   srand(time(NULL));         // la graine de l'aléatoire : s pour seed et rand pour aléatoire
   // Cette fonction srand DOIT être lancée une SEULE fois au début du programme qui va utiliser l'aléatoire

   alea = rand();

   cout << "Le max de rand : " << RAND_MAX << endl;

   cout << "Le premier nombre aléatoire est : " << alea << endl;

   for (int i = 0; i < 100000; i++)
   {
      alea = genererAleatoire(min, max);
      cout << "Valeur aléatoire #" << i + 1 << " : " << alea << endl;
      switch (alea)
      {
         case 1:
            nb1++;
            break;
         case 2:
            nb2++;
            break;
         case 3:
            nb3++;
            break;
         case 4:
            nb4++;
            break;
         case 5:
            nb5++;
            break;
         case 6:
            nb6++;
            break;
      }
   }
   cout << "Fréquence des 1 : " << nb1 << endl;
   cout << "Fréquence des 2 : " << nb2 << endl;
   cout << "Fréquence des 3 : " << nb3 << endl;
   cout << "Fréquence des 4 : " << nb4 << endl;
   cout << "Fréquence des 5 : " << nb5 << endl;
   cout << "Fréquence des 6 : " << nb6 << endl;






   system("pause");
   return 0;
}