#include "Labo05-Fonctions.h"

#include <iostream>
using namespace std;



double calculerMax(double valeur1, double valeur2, double valeur3)
{
   // D�claration des variables
   double max = valeur1;

   if (valeur2 > max)
      max = valeur2;
   if (valeur3 > max)
      max = valeur3;

   return max;
}

int calculerFactorielle(int nb)
{
   // D�claration des variables
   int facto = 1;          // La r�gle pour la factorielle est que 0! vaut 1. Au d�part on part toujours � 1
   
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
      case 2: cout << " f�vrier ";
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
      case 8: cout << " ao�t ";
         break;
      case 9: cout << " septembre ";
         break;
      case 10: cout << " octobre ";
         break;
      case 11: cout << " novembre ";
         break;
      case 12: cout << " d�cembre ";
         break;
   }

   // la fonction doit afficher l'ann�e
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

int determinerGroupeAge(int age)
{
    
   if (age >= 0 && age <= 12)
   {
      return 1;
   }
   else if (age >= 13 && age <=17 )
   {
      return 2;
   }
   else if (age >= 18 && age <= 64)
   {
      return 3;
   }
   else
   {
      return 4;
   }
  
}
