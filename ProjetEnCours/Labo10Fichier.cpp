// But : Utiliser les fichiers pour sauvegarder les données
// Écrire un programme qui calcule la moyenne des notes des étudiants
// Auteur : Karine Moreau
// Date : 2021-11-08


#include <iostream>
#include <fstream>      // Bibliothèque pour fournir les outils permettant de lire ou écrire dans des fichiers. f pour file et stream pour canal, voie de circulation des données
#include <string>

using namespace std;



int main()
{
   setlocale(LC_ALL, "");
  
   // Déclaration des constantes
   const string NOM_FICHIER = "Donnees.txt";


   // Déclaration des variables
   // Il faut créer un canal pour faire circuler les données du disque dur vers la mémoire
   ifstream canalEntree;            // i pour input, f pour file et stream pour canal : c'est le type de la variable pour créer la voie de circulation des données
                                    // cette voie va du fichier sur disque dur vers la mémoire. 
   // Il faut créer autant de variables qu'il y a de champs(colonne) dans le fichier
   string nomEtudiant;
   double examen1;
   double examen2;
   double examenFinal;

   // Initialiser le canal
   canalEntree.open(NOM_FICHIER, ios::in);

   // Il se peut que le canal ne soit pas bien ouvert, parce que le nom du fichier n'est pas correct, son emplacement n'est pas le bon ou que l'utilisateur n'a pas les droits d'accès
   if (!canalEntree)
   {
      cerr << "Erreur : Le fichier " << NOM_FICHIER << " n'a pas pu être ouvert. Vérifiez son nom, son emplacement ou vos droits d'accès." << endl;
      // Si on ne peut pas ouvrir le fichier, on n'a plus rien à faire. On quitte le programme
      system("pause");
      exit(404);
   }

   // ici le canal a bien été ouvert et initialisé, une il y maintenant un canal entre le fichier sur le disque et la mémoire.
   cout << "Tout va bien !" << endl;

   // On TENTE de lire les données
   getline(canalEntree, nomEtudiant, '\t');
   canalEntree >> examen1;
   canalEntree >> examen2;
   canalEntree >> examenFinal;


   // Est-ce qu'on a été capable de lire les données dans le fichier. Est-ce qu'on a atteint la fin du fichier  : fonction eof() (end of file)
   while (!canalEntree.eof())
   {
      cout << "Les données lues dans le fichier" << endl;
      cout << nomEtudiant << " " << examen1 << " " << examen2 << " " << examenFinal << endl;
      
      // On TENTE de lire les données
      getline(canalEntree, nomEtudiant, '\t');
      canalEntree >> examen1;
      canalEntree >> examen2;
      canalEntree >> examenFinal;
   }
   
   cerr << "Il n'y a plus de données dans le fichier" << endl;
   





  
   system("pause");
   return 0;
}