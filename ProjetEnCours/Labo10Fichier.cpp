// But : Utiliser les fichiers pour sauvegarder les données
// Écrire un programme qui calcule la moyenne des notes des étudiants
// Auteur : Karine Moreau
// Date : 2021-11-08


#include <iostream>
#include <fstream>      // Bibliothèque pour fournir les outils permettant de lire ou écrire dans des fichiers. f pour file et stream pour canal, voie de circulation des données
#include <string>
#include <iomanip>

using namespace std;



int main()
{
   setlocale(LC_ALL, "");
  
   // Déclaration des constantes
   const string NOM_FICHIER = "Donnees.txt";
   const string RESULTAT = "Resultats.txt";
   const string TITRE = "Résultats du cours de programmation structurée";
   const string NOM_COL1 = "Nom étudiant";
   const string NOM_COL2 = "Eval 1";
   const string NOM_COL3 = "Eval 2";
   const string NOM_COL4 = "Eval 3";
   const string NOM_COL5 = "Total";
   const string NOM_COL6 = "Résultats";
   const string REUSSITE = "Succès";
   const string ECHEC = "Échec";
   const string PIED_PAGE = "Statistiques";
   const string CALCUL = "Moyenne";

   const double NOTE_PASSAGE = 60;

   const int COL1 = 35;
   const int COL2 = 10;
   const int COL3 = 10;
   const int COL4 = 10;
   const int COL5 = 10;
   const int COL6 = 10;
   const int LARGEUR = COL1+ COL2 + COL3 + COL4 + COL5 + COL6;


   // Déclaration des variables
   // Il faut créer un canal pour faire circuler les données du disque dur vers la mémoire
   ifstream canalEntree;            // i pour input, f pour file et stream pour canal : c'est le type de la variable pour créer la voie de circulation des données
                                    // cette voie va du fichier sur disque dur vers la mémoire.
   ofstream canalSortie;            // o pour output, f pour file et stream pour canal : c'est le type de la variable pour créer la voie de circulation des données dans l'autre sens
   
   // Il faut créer autant de variables qu'il y a de champs(colonne) dans le fichier
   string nomEtudiant;
   double examen1;
   double examen2;
   double examenFinal;
   double total;
   double moyenne1 = 0;
   double moyenne2 = 0;
   double moyenne3 = 0;
   double moyenne4 = 0;
   int nbEtudiants = 0;

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


   // Initialiser le canal de sortie : le mode out permet de créer le fichier. S'il existe déjà, le fichier sera écrasé
   canalSortie.open(RESULTAT, ios::out);
   if (!canalSortie)
   {
      cerr << "Erreur : Le fichier " << RESULTAT << " n'a pas été correctement créé. Vérifiez l'espace disque disponible ou vos droits d'accès." << endl;
      system("pause");
      exit(405);
   }


   // On veut afficher les double avec 2 chiffres après virgule
   canalSortie << fixed << setprecision(2);
 

   // ici le canal a bien été ouvert et initialisé, il y a maintenant un canal entre le fichier sur le disque et la mémoire.
   // La route est ouverte dans les deux sens
   cout << "Tout va bien !" << endl;

   // On va créer l'en-tête du fichier résultats
   /*
   ----------------------------------------------------------------------------------
                  Résultats du cours de programmation structurée
   ----------------------------------------------------------------------------------
   Nom étudiant                        Eval 1    Eval 2    Eval 3     Total Résultats 
   ----------------------------------------------------------------------------------
     
   
   */

   canalSortie << setfill('-') << setw(LARGEUR) << "-" << endl;
   canalSortie << setfill(' ') << setw((LARGEUR- TITRE.size())/2) << " " << TITRE << endl;
   canalSortie << setfill('-') << setw(LARGEUR) << "-" << endl;
   canalSortie << setfill(' ') << left << setw(COL1) << NOM_COL1 << right << setw(COL2) << NOM_COL2 << setw(COL3) << NOM_COL3 << setw(COL4) << NOM_COL4 << setw(COL5) << NOM_COL5 << " ";
   canalSortie << left << setw(COL6) << NOM_COL6 << endl;
   canalSortie << setfill('-') << setw(LARGEUR) << "-" << endl;



   // On TENTE de lire les données
   getline(canalEntree, nomEtudiant, '\t');
   canalEntree >> examen1;
   canalEntree >> examen2;
   canalEntree >> examenFinal;
   canalEntree.ignore(1, '\n');


   // Est-ce qu'on a été capable de lire les données dans le fichier. Est-ce qu'on a atteint la fin du fichier  : fonction eof() (end of file)
   while (!canalEntree.eof())
   {
      // Traitement des données lues dans le fichiers
      total = examen1 + examen2 + examenFinal;
      moyenne1 = moyenne1 + examen1;
      moyenne2 = moyenne2 + examen2;
      moyenne3 = moyenne3 + examenFinal;
      moyenne4 = moyenne4 + total;
      nbEtudiants++;


      // Afficher les résultats bien formatés
      canalSortie << setfill(' ') << left << setw(COL1) << nomEtudiant << right << setw(COL2) << examen1 << setw(COL3) << examen2 << setw(COL4) << examenFinal << setw(COL5) << total << " ";
      canalSortie << left << setw(COL6) << ( total >= NOTE_PASSAGE? REUSSITE  : ECHEC) << endl;
      
      
      // On TENTE de lire les données
      getline(canalEntree, nomEtudiant, '\t');
      canalEntree >> examen1;
      canalEntree >> examen2;
      canalEntree >> examenFinal;
      canalEntree.ignore(1, '\n');
   }
   
   /*
   ----------------------------------------------------------------------------------
   Statistiques
   Moyenne                              19.73     20.00     23.00     62.73
   
   */

   // On calcule la moyenne en divisant par le nombre total d'étudiants
   // S'il y a plus d'un étudiant on divise par le nmbre total d'étudiants
   if (nbEtudiants > 1)
   {
      moyenne1 /= nbEtudiants;
      moyenne2 /= nbEtudiants;
      moyenne3 /= nbEtudiants;
      moyenne4 /= nbEtudiants;
   }



   canalSortie << setfill('-') << setw(LARGEUR) << "-" << endl;
   canalSortie << PIED_PAGE << endl;
   canalSortie << setfill(' ') << left << setw(COL1) << CALCUL << right << setw(COL2) << moyenne1 << setw(COL3) << moyenne2 << setw(COL4) << moyenne3 << setw(COL5) << moyenne4 << endl;
   

 
   





  
   system("pause");
   return 0;
}