#include "Labo08Fonctions.h"

int genererAleatoire(int min, int max)
{
   // srand JAMAIS dans une fonction autre que le MAIN
   // srand(time(NULL));
   return rand() % (max-min +1) + min;
}
