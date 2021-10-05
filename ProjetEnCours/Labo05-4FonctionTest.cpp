// But : Tester tout les fonctions de notre bibliothèque
/*

*/
// Auteur : Issam Abdelkrim
// Date : 2021-09-27

#include <iostream>
#include <math.h>
#include "Labo05FonctionMath.h"
#include "FonctionTest.h"

using namespace std;


int main()
{
   setlocale(LC_ALL, "");

   // Déclaration des variables
   int jour;
   int mois;
   int annee;
   int factorielle;
   int age;
   int ageCat;
   // constante
   const int MIN = 0;
   const int MAX = 122;


  // cout << "                           =============== Test de la fonction calculerMax  =============== " << endl;
   // Demander à l''utilisateur 3 nmb et appeler la fonction calculerMax qui retourne le plus grand des 3 nombres qui sont passé en paramètre à la fonction
/*
   cout << "Veuillez entrer un premier nombre : ";

   cin >> nb1;

   cout << "Veuillez entrer un deuxième nombre : ";

   cin >> nb2;

   cout << "Veuillez entrer un troisième nombre : ";

   cin >> nb3;

   cout << endl;

   cout << "Le maximum des trois nombres est " << calculerMax(nb1, nb2, nb3) << endl;

   cout << "                           =============== Test de la fonction calculerFactorielle  =============== " << endl;
   // Demander à l''utilisateur 1 nmb et calculer sa factorielle avec la fonction calculerFactorielle

   cout << "Veuillez entrer un premier nombre entier : ";

   cin >> factorielle;

   cout << endl;

   if (factorielle >= 0)
      cout << "La factorielle de " << factorielle << " est " << calculerFactorielle(factorielle) << endl;
   else
      cout << "La factorielle se calcule que pour des nombres entiers positifs!" << endl;

*/

   /*
   cout << "      =============== Test de la fonction afficher la date en toute lettre d'une date (jour, mois et une année) passée en paramètre  ===============     " << endl;
   // Demander à l''utilisateur 1 nmb et calculer sa factorielle avec la fonction calculerFactorielle

   cout << "Veuillez entrer le jour(1-31) : ";
   cin >> jour;

   cout << "Veuillez entrer le jour(1-12) : ";
   cin >> mois;

   cout << "Veuillez entrer le jour(1592-...) : ";
   cin >> annee;
;
   cout << endl;

   while (validerDate(jour, mois, annee))
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

    cout << "Votre date contient un élément non valide!" << endl;

*/

  /* cout << "    ========== Test de la fonction qui dit oui ou non (vrai ou faux) le nombre passé en paramètre est pair  ==========    " << endl;
   // Demander à l''utilisateur 1 nmb et calculer sa factorielle avec la fonction calculerFactorielle

   cout << "Vrai = pair & faux = impair \n" << endl;

   cout << "Veuillez entrer un nombre (pour vérifier si il est pair): ";

   cin >> jour;

   cout << (validerPair(jour) == 1 ? "vrai" : "faux") << endl;

   cout << "Bonne journée!" << endl;*/

     cout << "    ========== Test de la fonction qui donne l'âge  ==========    " << endl;
  // Demander à l''utilisateur 1 nmb et calculer sa factorielle avec la fonction calculerFactorielle

 /* cout << "Quel est votre âge: ";
  cin >> age;
  */

  /*age = retournerValeur("âge", MIN, MAX);

  age = retournerValeur("dimension",4, 20);*/

  age = retournerValeur("âge", MIN, true, MAX, false);

  age = retournerValeur("âge", MIN, true, MAX, true);

  age = retournerValeur("âge", MIN, false, MAX, false);

  age = retournerValeur("âge", MIN, false, MAX, true);

  /*while (!validerAge(age, MIN, MAX))
  {
     cout << "Erreur! L'âge est invalide!" << endl;

     system("pause");
     system("cls");

     cout << "Quel est votre âge: ";
     cin >> age;

  }

  cout << "Quel est votre catégorie d'âge: ";
  cin >> ageCat;

  while (!(validerAgeCat(age, ageCat)))
  {
     cout << "Erreur! L'âge et la catégore d'âge ne correspondent pas!" << endl;

     system("pause");
     system("cls");

     cout << "Quel est votre âge: ";
     cin >> age;
     cout << "Quel est votre catégorie d'âge: ";
     cin >> ageCat;

  }*/

  /*while (age < 0)
  {
     cout << "Erreur! L'âge ne peut pas être négatif!";

     cout << "Quel est votre âge: ";
     cin >> age;

  }*/

  //cout << "Votre catégorie d'âge est " << determinerAge(age) << endl;

  cout << "Votre catégorie d'âge est " << determinerAge(age) << endl;


   system("pause");
   return 0;
}

//Plan de tests         écran 
// 
   /*




   */








