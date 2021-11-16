// But : Créer des fonctions en utilisant les fichiers
// Écrire un programme qui calcule la moyenne des notes des étudiants
// Auteur : Karine Moreau
// Date : 2021-11-15

#include "Labo11Fonctions.h"

int main()
{
   setlocale(LC_ALL, "");
  
   // Déclaration des variables
   // Il faut créer un canal pour faire circuler les données du disque dur vers la mémoire
   ifstream canalEntree = ouvrirFichierEnLecture(NOM_FICHIER);            // i pour input, f pour file et stream pour canal : c'est le type de la variable pour créer la voie de circulation des données
                                                                           // cette voie va du fichier sur disque dur vers la mémoire.
   ofstream canalSortie;            // o pour output, f pour file et stream pour canal : c'est le type de la variable pour créer la voie de circulation des données dans l'autre sens
   
   etudiantNotes unEtudiantEtSesNotes;
   resultats totalEtMoyennes;

   //canalEntree = ouvrirFichierEnLecture(NOM_FICHIER);
   canalSortie = ouvrirFichierEnEcriture(RESULTAT);

  // ici le canal a bien été ouvert et initialisé, il y a maintenant un canal entre le fichier sur le disque et la mémoire.
   // La route est ouverte dans les deux sens
   cout << "Tout va bien !" << endl;

   ecrireEnTete(canalSortie, 2);
 
   unEtudiantEtSesNotes = lireEnregistrement(canalEntree);

   // Est-ce qu'on a été capable de lire les données dans le fichier. Est-ce qu'on a atteint la fin du fichier  : fonction eof() (end of file)
   while (!canalEntree.eof())
   {
      // Traitement des données lues dans le fichiers
      calculerResultats(unEtudiantEtSesNotes, totalEtMoyennes);

      ecrireEnregistrement(canalSortie, unEtudiantEtSesNotes, totalEtMoyennes);
      
      // On TENTE de lire les données
      lireEnregistrement(canalEntree, unEtudiantEtSesNotes);
   }

   calculerMoyenne(totalEtMoyennes);

   ecrirePiedDePage(canalSortie, totalEtMoyennes);
    // A la fin du programme, il faut penser à fermer les canaux
   canalEntree.close();
   canalSortie.close();    // Force l'enregistrement des données sur le disque dur. 
     
   system("pause");
   return 0;
}