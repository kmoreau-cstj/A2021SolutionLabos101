#include "FonctionTest.h"
#include <iostream>

using namespace std;

double calculerMax(double nb1, double nb2, double nb3)
{
   double max = nb1;

   if (max < nb2)
      max = nb2;
   if (max < nb3)
      max = nb3;

   return max;
}

int calculerFactorielle(int valeur)
{
  
   int facto = 1; // La règle pour la factorielle est que 0! vaut 1. Au départ on part tjrs à 1.

   for (int i = 1; i <= valeur; i++)
   {
      facto = facto * i ;
   }
      

   return facto;
}

void afficherDate(int jour, int mois, int annee)
{
      switch (mois)
      {
      case 1:
         cout << "Nous sommes le " << jour << " janvier " << annee;
         break;
      case 2:
         cout << "Nous sommes le " << jour << " février " << annee;
         break;
      case 3:
         cout << "Nous sommes le " << jour << " mars " << annee;
         break;
      case 4:
         cout << "Nous sommes le " << jour << " avril " << annee;
         break;
      case 5:
         cout << "Nous sommes le " << jour << " mai " << annee;
         break;
      case 6:
         cout << "Nous sommes le " << jour << " juin " << annee;
      case 7:
         cout << "Nous sommes le " << jour << " juillet " << annee;
         break;
      case 8:
         cout << "Nous sommes le " << jour << " août " << annee;
         break;
      case 9:
         cout << "Nous sommes le " << jour << " septembre " << annee;
         break;
      case 10:
         cout << "Nous sommes le " << jour << " octobre " << annee;
      case 11:
         cout << "Nous sommes le " << jour << " novembre " << annee;
         break;
      default:
         cout << "Nous sommes le " << jour << " décembre " << annee;
         break;
      }

}

int validerDate(int jour, int mois, int annee)
{
   while (jour >= 0 && jour <= 31 && mois >= 1 && mois <= 12 && annee >= 1592)
   {
      afficherDate(jour, mois, annee); // On doit l'appeler de cette maniere car elle retourne void on peut pas utiliser cout

      cout << endl;

      system("pause");
      system("cls");

      cout << "Veuillez entrer le jour(1-31) : ";
      cin >> jour;

      cout << "Veuillez entrer le jour(1-12) : ";
      cin >> mois;

      cout << "Veuillez entrer le jour(1592-...) : ";
      cin >> annee;

      cout << endl;
   }

   return 0;
}

bool validerPair(int nb)
{

  return (nb % 2 == 0 ? true : false);

}

int determinerAge(int age)
{

   if (age >= 0 && age <= 12)
      return 1;
   else if (age >= 13 && age <= 17)
      return 2;
   else if (age >= 18 && age <= 64)
      return 3;
   else
      return 4;

   return 0;
}

bool validerAgeCat(int a, int c)
{
   if ((a >= 0 && a <= 12) && (c == 1))
   return true;

   if ((a >= 13 && a <= 17) && (c == 2))
   return true;

   if ((a >= 18 && a <= 64) && (c == 3))
   return true;

   if ((a >= 65) && (c == 4))
   return true;

   return false;
}

bool validerAge(int a, const int MIN, const int MAX)
{

   if (a >= MIN && a <= MAX)
      return true;

   return false;
}

int retournerValeur(string texte, const int MIN, const int MAX)
{
   int a;

   cout << "Indiquer votre " << texte << " : ";
   cin >> a;

   while (!(a >= MIN && a <= MAX))
   {
      cout << "Erreur! " << texte << " est invalide!" << endl;

      system("pause");
      system("cls");

      cout << "Indiquer votre " << texte << " : ";
      cin >> a;
   }

   return a;
}

int retournerValeur(string texte, const int MIN, bool inclusMin, const int MAX, bool inclusMax)
{
   int a;

   cout << "Indiquer votre " << texte << " : ";
   cin >> a;

   if (inclusMin && inclusMax)
   {
      while (!(a >= MIN && a <= MAX))
      {
         cout << "Erreur! " << texte << " est invalide!" << endl;

         system("pause");
         system("cls");

         cout << "Indiquer votre " << texte << " : ";
         cin >> a;
      }
   }
   else if (!inclusMin && !inclusMax)
   {
      while (!(a > MIN && a < MAX))
      {
         cout << "Erreur! " << texte << " est invalide!" << endl;

         system("pause");
         system("cls");

         cout << "Indiquer votre " << texte << " : ";
         cin >> a;
      }
   }
   else if (!inclusMin && inclusMax)
   {
      while (!(a > MIN && a <= MAX))
      {
         cout << "Erreur! " << texte << " est invalide!" << endl;

         system("pause");
         system("cls");

         cout << "Indiquer votre " << texte << " : ";
         cin >> a;
      }
   }
   else
   {
      while (!(a >= MIN && a < MAX))
      {
         cout << "Erreur! " << texte << " est invalide!" << endl;

         system("pause");
         system("cls");

         cout << "Indiquer votre " << texte << " : ";
         cin >> a;
      }
   }

   return 0;
}






