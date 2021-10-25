#pragma once

// Liste des include
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



// Liste des constantes : Comment elles ne peuvent pas changer de valeur, on peut les rendre publiques � tous
const int LARGEUR_COL1 = 40;
const int LARGEUR_COL2 = 15;

// ATTENTION : dans le .h il N'Y A PAS DE liste de variables, car leur contenu pourrait �tre chang� par n'importe quelle fonction. 
// Pour prot�ger leur contenu, on les d�clare dans les fonctions ou on passe leur valeur en param�tre

// Liste des prototypes de fonctions
void tracerLigne(char remplissage, int longueur, bool avecENDL);

void centrerTexte(char remplissage, int longueur, string texte, bool avecENDL);


