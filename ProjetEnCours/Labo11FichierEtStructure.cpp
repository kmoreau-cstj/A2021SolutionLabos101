// But : Cr�er des fonctions en utilisant les fichiers
// �crire un programme qui calcule la moyenne des notes des �tudiants
// Auteur : Karine Moreau
// Date : 2021-11-15

#include "Labo11Fonctions.h"

int main()
{
   setlocale(LC_ALL, "");
  
   // D�claration des variables
   // Il faut cr�er un canal pour faire circuler les donn�es du disque dur vers la m�moire
   ifstream canalEntree = ouvrirFichierEnLecture(NOM_FICHIER);            // i pour input, f pour file et stream pour canal : c'est le type de la variable pour cr�er la voie de circulation des donn�es
                                                                           // cette voie va du fichier sur disque dur vers la m�moire.
   ofstream canalSortie;            // o pour output, f pour file et stream pour canal : c'est le type de la variable pour cr�er la voie de circulation des donn�es dans l'autre sens
   
   etudiantNotes unEtudiantEtSesNotes;
   resultats totalEtMoyennes;

   //canalEntree = ouvrirFichierEnLecture(NOM_FICHIER);
   canalSortie = ouvrirFichierEnEcriture(RESULTAT);

  // ici le canal a bien �t� ouvert et initialis�, il y a maintenant un canal entre le fichier sur le disque et la m�moire.
   // La route est ouverte dans les deux sens
   cout << "Tout va bien !" << endl;

   ecrireEnTete(canalSortie, 2);
 
   unEtudiantEtSesNotes = lireEnregistrement(canalEntree);

   // Est-ce qu'on a �t� capable de lire les donn�es dans le fichier. Est-ce qu'on a atteint la fin du fichier  : fonction eof() (end of file)
   while (!canalEntree.eof())
   {
      // Traitement des donn�es lues dans le fichiers
      calculerResultats(unEtudiantEtSesNotes, totalEtMoyennes);

      ecrireEnregistrement(canalSortie, unEtudiantEtSesNotes, totalEtMoyennes);
      
      // On TENTE de lire les donn�es
      lireEnregistrement(canalEntree, unEtudiantEtSesNotes);
   }

   calculerMoyenne(totalEtMoyennes);

   ecrirePiedDePage(canalSortie, totalEtMoyennes);
    // A la fin du programme, il faut penser � fermer les canaux
   canalEntree.close();
   canalSortie.close();    // Force l'enregistrement des donn�es sur le disque dur. 
     
   system("pause");
   return 0;
}