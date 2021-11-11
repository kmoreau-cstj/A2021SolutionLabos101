// But : Utiliser les fichiers pour sauvegarder les donn�es
// �crire un programme qui calcule la moyenne des notes des �tudiants
// Auteur : Karine Moreau
// Date : 2021-11-08


#include <iostream>
#include <fstream>      // Biblioth�que pour fournir les outils permettant de lire ou �crire dans des fichiers. f pour file et stream pour canal, voie de circulation des donn�es
#include <string>
#include <iomanip>

using namespace std;



int main()
{
   setlocale(LC_ALL, "");
  
   // D�claration des constantes
   const string NOM_FICHIER = "Donnees.txt";
   const string RESULTAT = "Resultats.txt";
   const string TITRE = "R�sultats du cours de programmation structur�e";
   const string NOM_COL1 = "Nom �tudiant";
   const string NOM_COL2 = "Eval 1";
   const string NOM_COL3 = "Eval 2";
   const string NOM_COL4 = "Eval 3";
   const string NOM_COL5 = "Total";
   const string NOM_COL6 = "R�sultats";
   const string REUSSITE = "Succ�s";
   const string ECHEC = "�chec";
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


   // D�claration des variables
   // Il faut cr�er un canal pour faire circuler les donn�es du disque dur vers la m�moire
   ifstream canalEntree;            // i pour input, f pour file et stream pour canal : c'est le type de la variable pour cr�er la voie de circulation des donn�es
                                    // cette voie va du fichier sur disque dur vers la m�moire.
   ofstream canalSortie;            // o pour output, f pour file et stream pour canal : c'est le type de la variable pour cr�er la voie de circulation des donn�es dans l'autre sens
   
   // Il faut cr�er autant de variables qu'il y a de champs(colonne) dans le fichier
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

   // Initialiser le canal d'entr�e
   canalEntree.open(NOM_FICHIER, ios::in);
   // Il se peut que le canal ne soit pas bien ouvert, parce que le nom du fichier n'est pas correct, son emplacement n'est pas le bon ou que l'utilisateur n'a pas les droits d'acc�s
   if (!canalEntree)
   {
      cerr << "Erreur : Le fichier " << NOM_FICHIER << " n'a pas pu �tre ouvert. V�rifiez son nom, son emplacement ou vos droits d'acc�s." << endl;
      // Si on ne peut pas ouvrir le fichier, on n'a plus rien � faire. On quitte le programme
      system("pause");
      exit(404);
   }


   // Initialiser le canal de sortie : le mode out permet de cr�er le fichier. S'il existe d�j�, le fichier sera �cras�
   canalSortie.open(RESULTAT, ios::app);           // Pour ne pas �craser un fichier existant et pouvoir lui ajouter des donn�es � la fin, il faut ouvrir dans le mode ios::app (append)              
   if (!canalSortie)
   {
      cerr << "Erreur : Le fichier " << RESULTAT << " n'a pas �t� correctement cr��. V�rifiez l'espace disque disponible ou vos droits d'acc�s." << endl;
      system("pause");
      exit(405);
   }


   // On veut afficher les double avec 2 chiffres apr�s virgule : Il faut juste le faire une fois apr�s que le canal soit ouvert
   // Fixed permet de ne plus afficher les nombres � virgule avec e puissance de 10
   // Fixed voulant dire que la position de la virgule ne change pas. 10.123 (fixed) 1.0123 e1(scientifique)
   // setprecision en fixed pr�cise le nombre de chiffres apr�s la virgule
   // setprecision en scientifique(scientific) indique le nombre total de chiffres (partie enti�re + partie d�cimale)
   canalSortie << fixed << setprecision(2);        // Fonctions fournies par iomanip
 

   // ici le canal a bien �t� ouvert et initialis�, il y a maintenant un canal entre le fichier sur le disque et la m�moire.
   // La route est ouverte dans les deux sens
   cout << "Tout va bien !" << endl;

   // On va cr�er l'en-t�te du fichier r�sultats
   /*
   ----------------------------------------------------------------------------------
                  R�sultats du cours de programmation structur�e
   ----------------------------------------------------------------------------------
   Nom �tudiant                        Eval 1    Eval 2    Eval 3     Total R�sultats 
   ----------------------------------------------------------------------------------
     
   
   */

   canalSortie << setfill('-') << setw(LARGEUR) << "-" << endl;
   canalSortie << setfill(' ') << setw((LARGEUR- TITRE.size())/2) << " " << TITRE << endl;
   canalSortie << setfill('-') << setw(LARGEUR) << "-" << endl;
   canalSortie << setfill(' ') << left << setw(COL1) << NOM_COL1 << right << setw(COL2) << NOM_COL2 << setw(COL3) << NOM_COL3 << setw(COL4) << NOM_COL4 << setw(COL5) << NOM_COL5 << " ";
   canalSortie << left << setw(COL6) << NOM_COL6 << endl;
   canalSortie << setfill('-') << setw(LARGEUR) << "-" << endl;



   // On TENTE de lire les donn�es
   getline(canalEntree, nomEtudiant, '\t');
   canalEntree >> examen1;
   canalEntree >> examen2;
   canalEntree >> examenFinal;
   canalEntree.ignore(1, '\n');


   // Est-ce qu'on a �t� capable de lire les donn�es dans le fichier. Est-ce qu'on a atteint la fin du fichier  : fonction eof() (end of file)
   while (!canalEntree.eof())
   {
      // Traitement des donn�es lues dans le fichiers
      total = examen1 + examen2 + examenFinal;
      moyenne1 = moyenne1 + examen1;
      moyenne2 = moyenne2 + examen2;
      moyenne3 = moyenne3 + examenFinal;
      moyenne4 = moyenne4 + total;
      nbEtudiants++;


      // Afficher les r�sultats bien format�s
      canalSortie << setfill(' ') << left << setw(COL1) << nomEtudiant << right << setw(COL2) << examen1 << setw(COL3) << examen2 << setw(COL4) << examenFinal << setw(COL5) << total << " ";
      canalSortie << left << setw(COL6) << ( total >= NOTE_PASSAGE? REUSSITE  : ECHEC) << endl;
      
      
      // On TENTE de lire les donn�es
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

   // On calcule la moyenne en divisant par le nombre total d'�tudiants
   // S'il y a plus d'un �tudiant on divise par le nmbre total d'�tudiants
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
   canalSortie << setfill('-') << setw(LARGEUR) << "-" << endl;
   canalSortie << setfill('-') << setw(LARGEUR) << "-" << endl;

   // A la fin du programme, il faut penser � fermer les canaux
   canalEntree.close();
   canalSortie.close();    // Force l'enregistrement des donn�es sur le disque dur. 





  
   system("pause");
   return 0;
}