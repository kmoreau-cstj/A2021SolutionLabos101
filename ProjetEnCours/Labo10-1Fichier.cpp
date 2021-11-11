// But : Utiliser les fichiers pour sauvegarder les donn�es
// Exercice 1
// Auteur : Karine Moreau
// Date : 2021-11-11


#include <iostream>
#include <fstream>      // Biblioth�que pour fournir les outils permettant de lire ou �crire dans des fichiers. f pour file et stream pour canal, voie de circulation des donn�es
#include <string>
#include <iomanip>

using namespace std;



int main()
{
   setlocale(LC_ALL, "");
  
   // D�claration des constantes
   const string NOM_FICHIER = "Exercice1.txt";

   const int MIN = 1;
   const int MAX = 70;
   const int LARGEUR = 5;


   // D�claration des variables
   // Il faut cr�er un canal pour faire circuler les donn�es du disque dur vers la m�moire
   ifstream canalEntree;            // i pour input, f pour file et stream pour canal : c'est le type de la variable pour cr�er la voie de circulation des donn�es
                                    // cette voie va du fichier sur disque dur vers la m�moire.
   ofstream canalSortie;            // o pour output, f pour file et stream pour canal : c'est le type de la variable pour cr�er la voie de circulation des donn�es dans l'autre sens
   
   // Il faut cr�er autant de variables qu'il y a de champs(colonne) dans le fichier
   int nombre;

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


   // On TENTE de lire les donn�es
   canalEntree >> nombre;
 


   // Est-ce qu'on a �t� capable de lire les donn�es dans le fichier. Est-ce qu'on a atteint la fin du fichier  : fonction eof() (end of file)
   while (!canalEntree.eof())
   {
      // Traitement des donn�es lues dans le fichiers
      cout << setfill(' ') << left << setw(LARGEUR) << nombre;

      if (nombre >= MIN && nombre <= MAX)
      {
         cout << setfill('*') << setw(nombre) << '*' << endl;
      }
      else
         cout << "Erreur sur le nombre" << endl;
      
      
      // On TENTE de lire les donn�es
    
      canalEntree >> nombre;

   }
   
   
   // A la fin du programme, il faut penser � fermer les canaux
   canalEntree.close();

  
   system("pause");
   return 0;
}