// But : g�n�rer des nombres al�atoires
// Auteur : Karine Moreau
// Date : 2021-10-26

#include "Labo08Fonctions.h"



int main()
{
   setlocale(LC_ALL, "");
   system("mode con lines=25 cols=80");
   // D�claration des variables
   int alea;
   int min = 1;
   int max = 6;


   // Combien de fois est sorti le chiffre de 1 � 6
   int nb1 = 0;
   int nb2 = 0;
   int nb3 = 0;
   int nb4 = 0;
   int nb5 = 0;
   int nb6 = 0;


   // D�claration des constantes

   //les nombres al�atoires sont stock�s d�j� m�lang�s dans un tableau et chaque ligne du tableau a un num�ro que l'on appelle la graine ou seed
   // On peut choisir la graine : le num�ro de la ligne de nombres al�atoires
   srand(time(NULL));         // la graine de l'al�atoire : s pour seed et rand pour al�atoire
   // Cette fonction srand DOIT �tre lanc�e une SEULE fois au d�but du programme qui va utiliser l'al�atoire

   alea = rand();

   cout << "Le max de rand : " << RAND_MAX << endl;

   cout << "Le premier nombre al�atoire est : " << alea << endl;

   for (int i = 0; i < 100000; i++)
   {
      alea = genererAleatoire(min, max);
      cout << "Valeur al�atoire #" << i + 1 << " : " << alea << endl;
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
   cout << "Fr�quence des 1 : " << nb1 << endl;
   cout << "Fr�quence des 2 : " << nb2 << endl;
   cout << "Fr�quence des 3 : " << nb3 << endl;
   cout << "Fr�quence des 4 : " << nb4 << endl;
   cout << "Fr�quence des 5 : " << nb5 << endl;
   cout << "Fr�quence des 6 : " << nb6 << endl;






   system("pause");
   return 0;
}