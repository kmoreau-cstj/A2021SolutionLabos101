#include "Labo05-Fonctions.h"

#include <iostream>
using namespace std;



double calculerMax(double valeur1, double valeur2, double valeur3)
{
   // Déclaration des variables
   double max = valeur1;

   if (valeur2 > max)
      max = valeur2;
   if (valeur3 > max)
      max = valeur3;

   return max;
}

int calculerFactorielle(int nb)
{
   // Déclaration des variables
   int facto = 1;          // La règle pour la factorielle est que 0! vaut 1. Au départ on part toujours à 1
   
   for (int i = 1; i <= nb; i++)
   {
      facto = facto * i;
   }

   return facto;
}

void afficherDateLongue(int j, int m, int a)
{
   // La fonction doit afficher le jour
   cout << j;

   // La fonction doit afficher le mois en toute lettre
   switch (m)
   {
      case 1: cout << " janvier ";
         break;
      case 2: cout << " février ";
         break;
      case 3: cout << " mars ";
         break;
      case 4: cout << " avril ";
         break;
      case 5: cout << " mai ";
         break;
      case 6: cout << " juin ";
         break;
      case 7: cout << " juillet ";
         break;
      case 8: cout << " août ";
         break;
      case 9: cout << " septembre ";
         break;
      case 10: cout << " octobre ";
         break;
      case 11: cout << " novembre ";
         break;
      case 12: cout << " décembre ";
         break;
   }

   // la fonction doit afficher l'année
   cout << a;
}

bool etrePair(int valeur)
{
   /*
   if (valeur % 2 == 0)

      return true;
   else
      return false;
      */
   return valeur % 2 == 0;

   //return !valeur%2;
}
