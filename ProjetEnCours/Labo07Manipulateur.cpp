// But : Utiliser les fonctions permettant de manipuler le texte dans la console. Il faut inclure la bibliothèque iomanip
// Auteur : Karine Moreau
// Date : 2021-10-25

#include "Labo07Fonctions.h"



int main()
{
   setlocale(LC_ALL, "");
   system("mode con lines=10 cols=120");
   // Déclaration des variables
   int a = 11;
   int b = 123;
   int c = 1234;
   int d = 25567;

   char motif;
   int nbMotifs;
   string texte;

   // Déclaration des constantes


   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Valeur de a" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << a << endl;
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Valeur de b" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << b << endl;
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Valeur de c" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << c << endl;
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Valeur de d" << " : " << right << setfill('.') << setw(LARGEUR_COL2) << d << endl;
   cout << left << setfill('-') << setw(LARGEUR_COL1 + 3 + LARGEUR_COL2) << "" << endl;
   //cout << left << setfill('-') << setw(LARGEUR_COL1 + LARGEUR_COL2) << "-" << endl;
   //cout << left << setfill('-') << setw(LARGEUR_COL1 + LARGEUR_COL2) << "\n";        // Pas bon : Le \n étant aligné à gauche il s'exécute avant les tirets
   //cout << right << setfill('-') << setw(LARGEUR_COL1 + LARGEUR_COL2) << "\n";         // Pas bon : Le \n prend un espace dans la colonne, donc il manque un tiret
   //cout << left << setfill('-') << setw(LARGEUR_COL1 + LARGEUR_COL2) << endl;          // Pas bon, le endl n'a pas de valeur à afficher dans la colonne
   cout << left << setfill(' ') << setw(LARGEUR_COL1) << "Somme" << " : "  << right << setfill('.') << setw(LARGEUR_COL2) << a+b+c+d << endl;

   // On demande à l'utilisateur le caractère de remplissage et le nombre de caractères souhaité
   cout << "Veuillez entrer le caractère de remplissage : ";
   cin >> motif;
   cout << "Veuillez entrer le nombre de caractères souhaité sur la ligne : ";
   cin >> nbMotifs;
   cin.ignore(1,'\n');

     

   tracerLigne(motif, nbMotifs, false);
   //tracerLigne(motif, nbMotifs, true);


   // On demande à l'utilisateur le texte qu'il voudrait centrer
   cout << "Veuillez entrer le titre à centrer : ";
   getline(cin, texte, '\n');
   tracerLigne(motif, nbMotifs, true);
   centrerTexte(motif, nbMotifs, texte, true);
   tracerLigne(motif, nbMotifs, true);







   system("pause");
   return 0;
}