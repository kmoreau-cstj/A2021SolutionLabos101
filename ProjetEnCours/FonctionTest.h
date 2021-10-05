#pragma once

#include <string>
using namespace std;

double calculerMax(double nb1, double nb2, double nb3);

int calculerFactorielle(int valeur);

void afficherDate(int jour, int mois, int annee);

int validerDate(int jour, int mois, int annee); // On peut utiliser des variable qui n'ont pas le même nom que dans le main

bool validerPair(int nb);

int determinerAge(int age);

bool validerAgeCat(int a, int c);

bool validerAge(int a, const int MIN, const int MAX);

int retournerValeur(string texte, const int MIN, const int MAX);

int retournerValeur(string texte, const int MIN, bool inclusMin, const int MAX, bool inclusMax);
