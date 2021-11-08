// But : Utiliser les fichiers pour sauvegarder les donn�es
// �crire un programme qui calcule la moyenne des notes des �tudiants
// Auteur : Karine Moreau
// Date : 2021-11-08


#include <iostream>
#include <fstream>      // Biblioth�que pour fournir les outils permettant de lire ou �crire dans des fichiers. f pour file et stream pour canal, voie de circulation des donn�es
#include <string>

using namespace std;



int main()
{
   setlocale(LC_ALL, "");
  
   // D�claration des constantes
   const string NOM_FICHIER = "Donnees.txt";


   // D�claration des variables
   // Il faut cr�er un canal pour faire circuler les donn�es du disque dur vers la m�moire
   ifstream canalEntree;            // i pour input, f pour file et stream pour canal : c'est le type de la variable pour cr�er la voie de circulation des donn�es
                                    // cette voie va du fichier sur disque dur vers la m�moire. 
   // Il faut cr�er autant de variables qu'il y a de champs(colonne) dans le fichier
   string nomEtudiant;
   double examen1;
   double examen2;
   double examenFinal;

   // Initialiser le canal
   canalEntree.open(NOM_FICHIER, ios::in);

   // Il se peut que le canal ne soit pas bien ouvert, parce que le nom du fichier n'est pas correct, son emplacement n'est pas le bon ou que l'utilisateur n'a pas les droits d'acc�s
   if (!canalEntree)
   {
      cerr << "Erreur : Le fichier " << NOM_FICHIER << " n'a pas pu �tre ouvert. V�rifiez son nom, son emplacement ou vos droits d'acc�s." << endl;
      // Si on ne peut pas ouvrir le fichier, on n'a plus rien � faire. On quitte le programme
      system("pause");
      exit(404);
   }

   // ici le canal a bien �t� ouvert et initialis�, une il y maintenant un canal entre le fichier sur le disque et la m�moire.
   cout << "Tout va bien !" << endl;

   // On TENTE de lire les donn�es
   getline(canalEntree, nomEtudiant, '\t');
   canalEntree >> examen1;
   canalEntree >> examen2;
   canalEntree >> examenFinal;


   // Est-ce qu'on a �t� capable de lire les donn�es dans le fichier. Est-ce qu'on a atteint la fin du fichier  : fonction eof() (end of file)
   while (!canalEntree.eof())
   {
      cout << "Les donn�es lues dans le fichier" << endl;
      cout << nomEtudiant << " " << examen1 << " " << examen2 << " " << examenFinal << endl;
      
      // On TENTE de lire les donn�es
      getline(canalEntree, nomEtudiant, '\t');
      canalEntree >> examen1;
      canalEntree >> examen2;
      canalEntree >> examenFinal;
   }
   
   cerr << "Il n'y a plus de donn�es dans le fichier" << endl;
   





  
   system("pause");
   return 0;
}