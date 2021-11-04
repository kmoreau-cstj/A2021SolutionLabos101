#pragma once
// La liste des include
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;
// La liste des constantes


// La liste des prototypes

// Ici la afficherVecteur est une fonction dite surchargée : elle a plusieurs prototypes qui diffèrent par la liste des paramètres (en nombre, ou en type)
void afficherVecteur(vector<int> vec);
void afficherVecteur(vector<double> vec);
void afficherVecteur(vector<char> vec);
void afficherVecteur(vector<float> vec);
void afficherVecteur(vector<string> vec);



int calculerFrequence(const vector<int>& vec, int valeur);

//vector<int> ajouterValeurALaFinVecteur(vector<int> vecEntier, int valeur);
void ajouterValeurALaFinVecteur(vector<int>& vecEntier, int valeur);


void echangerContenuDesVerres(int& VerreBleu, int& VerreRouge);



