#include "Labo05-Fonctions.h"
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
