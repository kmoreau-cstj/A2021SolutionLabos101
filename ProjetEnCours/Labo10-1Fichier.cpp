// But : Utiliser les fichiers pour sauvegarder les données
// Exercice 1
// Auteur : Karine Moreau
// Date : 2021-11-11


#include <iostream>
#include <fstream>      // Bibliothèque pour fournir les outils permettant de lire ou écrire dans des fichiers. f pour file et stream pour canal, voie de circulation des données
#include <string>
#include <iomanip>

using namespace std;



int main()
{
   setlocale(LC_ALL, "");
  
   // Déclaration des constantes
   const string NOM_FICHIER = "Exercice1.txt";

   const int MIN = 1;
   const int MAX = 70;
   const int LARGEUR = 5;


   // Déclaration des variables
   // Il faut créer un canal pour faire circuler les données du disque dur vers la mémoire
   ifstream canalEntree;            // i pour input, f pour file et stream pour canal : c'est le type de la variable pour créer la voie de circulation des données
                                    // cette voie va du fichier sur disque dur vers la mémoire.
   ofstream canalSortie;            // o pour output, f pour file et stream pour canal : c'est le type de la variable pour créer la voie de circulation des données dans l'autre sens
   
   // Il faut créer autant de variables qu'il y a de champs(colonne) dans le fichier
   int nombre;

   // Initialiser le canal d'entrée
   canalEntree.open(NOM_FICHIER, ios::in);
   // Il se peut que le canal ne soit pas bien ouvert, parce que le nom du fichier n'est pas correct, son emplacement n'est pas le bon ou que l'utilisateur n'a pas les droits d'accès
   if (!canalEntree)
   {
      cerr << "Erreur : Le fichier " << NOM_FICHIER << " n'a pas pu être ouvert. Vérifiez son nom, son emplacement ou vos droits d'accès." << endl;
      // Si on ne peut pas ouvrir le fichier, on n'a plus rien à faire. On quitte le programme
      system("pause");
      exit(404);
   }


   // On TENTE de lire les données
   canalEntree >> nombre;
 


   // Est-ce qu'on a été capable de lire les données dans le fichier. Est-ce qu'on a atteint la fin du fichier  : fonction eof() (end of file)
   while (!canalEntree.eof())
   {
      // Traitement des données lues dans le fichiers
      cout << setfill(' ') << left << setw(LARGEUR) << nombre;

      if (nombre >= MIN && nombre <= MAX)
      {
         cout << setfill('*') << setw(nombre) << '*' << endl;
      }
      else
         cout << "Erreur sur le nombre" << endl;
      
      
      // On TENTE de lire les données
    
      canalEntree >> nombre;

   }
   
   
   // A la fin du programme, il faut penser à fermer les canaux
   canalEntree.close();

  
   system("pause");
   return 0;
}