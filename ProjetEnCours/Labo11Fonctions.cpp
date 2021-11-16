#include "Labo11Fonctions.h"

ifstream ouvrirFichierEnLecture(string nomFichier)
{
   ifstream canal;
   
   // Initialiser le canal d'entrée
   canal.open(nomFichier, ios::in);
   // Il se peut que le canal ne soit pas bien ouvert, parce que le nom du fichier n'est pas correct, son emplacement n'est pas le bon ou que l'utilisateur n'a pas les droits d'accès
   if (!canal)
   {
      cerr << "Erreur : Le fichier " << nomFichier << " n'a pas pu être ouvert. Vérifiez son nom, son emplacement ou vos droits d'accès." << endl;
      // Si on ne peut pas ouvrir le fichier, on n'a plus rien à faire. On quitte le programme
      system("pause");
      exit(404);
   }   
   return canal;
}

ofstream ouvrirFichierEnEcriture(string nomFichier)
{
   ofstream canal;
   
   // Initialiser le canal de sortie : le mode out permet de créer le fichier. S'il existe déjà, le fichier sera écrasé
   canal.open(nomFichier, ios::out);           // Pour ne pas écraser un fichier existant et pouvoir lui ajouter des données à la fin, il faut ouvrir dans le mode ios::app (append)              
   if (!canal)
   {
      cerr << "Erreur : Le fichier " << RESULTAT << " n'a pas été correctement créé. Vérifiez l'espace disque disponible ou vos droits d'accès." << endl;
      system("pause");
      exit(405);
   }
      
   return canal;
}

void ecrireEnTete(ofstream& canal, int nbDecimales)
{
   // On veut afficher les double avec 2 chiffres après virgule : Il faut juste le faire une fois après que le canal soit ouvert
 // Fixed permet de ne plus afficher les nombres à virgule avec e puissance de 10
 // Fixed voulant dire que la position de la virgule ne change pas. 10.123 (fixed) 1.0123 e1(scientifique)
 // setprecision en fixed précise le nombre de chiffres après la virgule
 // setprecision en scientifique(scientific) indique le nombre total de chiffres (partie entière + partie décimale)
   canal << fixed << setprecision(nbDecimales);        // Fonctions fournies par iomanip



   // On va créer l'en-tête du fichier résultats
   /*
   ----------------------------------------------------------------------------------
                  Résultats du cours de programmation structurée
   ----------------------------------------------------------------------------------
   Nom étudiant                        Eval 1    Eval 2    Eval 3     Total Résultats
   ----------------------------------------------------------------------------------


   */

   canal << setfill('-') << setw(LARGEUR) << "-" << endl;
   canal << setfill(' ') << setw((LARGEUR - TITRE.size()) / 2) << " " << TITRE << endl;
   canal << setfill('-') << setw(LARGEUR) << "-" << endl;
   canal << setfill(' ') << left << setw(COL1) << NOM_COL1 << right << setw(COL2) << NOM_COL2 << setw(COL3) << NOM_COL3 << setw(COL4) << NOM_COL4 << setw(COL5) << NOM_COL5 << " ";
   canal << left << setw(COL6) << NOM_COL6 << endl;
   canal << setfill('-') << setw(LARGEUR) << "-" << endl;

}

etudiantNotes lireEnregistrement(ifstream& canal)
{
   etudiantNotes etudiantEnCours;
   
   // On TENTE de lire les données
   getline(canal, etudiantEnCours.nomEtudiant, '\t');
   canal >> etudiantEnCours.examen1;
   canal >> etudiantEnCours.examen2;
   canal >> etudiantEnCours.examenFinal;
   canal.ignore(1, '\n');
   
   
   return etudiantEnCours;
}

void lireEnregistrement(ifstream& canal, etudiantNotes& resultatsEtudiant)
{
   // On TENTE de lire les données
   getline(canal, resultatsEtudiant.nomEtudiant, '\t');
   canal >> resultatsEtudiant.examen1;
   canal >> resultatsEtudiant.examen2;
   canal >> resultatsEtudiant.examenFinal;
   canal.ignore(1, '\n');

}

resultats calculerResultats(etudiantNotes resultatsEtudiant)
{
   resultats resultatEnCours;
   
   resultatEnCours.total = resultatsEtudiant.examen1 + resultatsEtudiant.examen2 + resultatsEtudiant.examenFinal;
   resultatEnCours.moyenne1 = resultatEnCours.moyenne1 + resultatsEtudiant.examen1;
   resultatEnCours.moyenne2 = resultatEnCours.moyenne2 + resultatsEtudiant.examen2;
   resultatEnCours.moyenne3 = resultatEnCours.moyenne3 + resultatsEtudiant.examenFinal;
   resultatEnCours.moyenne4 = resultatEnCours.moyenne4 + resultatEnCours.total;
   resultatEnCours.nbEtudiants++;
   
   return resultatEnCours;
}

void calculerResultats(etudiantNotes resultatsEtudiant, resultats& moyennes)
{
   moyennes.total = resultatsEtudiant.examen1 + resultatsEtudiant.examen2 + resultatsEtudiant.examenFinal;
   moyennes.moyenne1 = moyennes.moyenne1 + resultatsEtudiant.examen1;
   moyennes.moyenne2 = moyennes.moyenne2 + resultatsEtudiant.examen2;
   moyennes.moyenne3 = moyennes.moyenne3 + resultatsEtudiant.examenFinal;
   moyennes.moyenne4 = moyennes.moyenne4 + moyennes.total;
   moyennes.nbEtudiants++;

}

void ecrireEnregistrement(ofstream& canal, etudiantNotes resultatsEtudiant, resultats moyennes)
{
   // Afficher les résultats bien formatés
   canal << setfill(' ') << left << setw(COL1) << resultatsEtudiant.nomEtudiant << right << setw(COL2) << resultatsEtudiant.examen1 << setw(COL3) << resultatsEtudiant.examen2 << setw(COL4) << resultatsEtudiant.examenFinal << setw(COL5) << moyennes.total << " ";
   canal << left << setw(COL6) << (moyennes.total >= NOTE_PASSAGE ? REUSSITE : ECHEC) << endl;
}

void calculerMoyenne(resultats& moyennes)
{

   // On calcule la moyenne en divisant par le nombre total d'étudiants
   // S'il y a plus d'un étudiant on divise par le nmbre total d'étudiants
   if (moyennes.nbEtudiants > 1)
   {
      moyennes.moyenne1 /= moyennes.nbEtudiants;
      moyennes.moyenne2 /= moyennes.nbEtudiants;
      moyennes.moyenne3 /= moyennes.nbEtudiants;
      moyennes.moyenne4 /= moyennes.nbEtudiants;
   }

}

void ecrirePiedDePage(ofstream& canal, resultats moyennes)
{
   
   /*
 ----------------------------------------------------------------------------------
 Statistiques
 Moyenne                              19.73     20.00     23.00     62.73

 */
   
   canal << setfill('-') << setw(LARGEUR) << "-" << endl;
   canal << PIED_PAGE << endl;
   canal << setfill(' ') << left << setw(COL1) << CALCUL << right << setw(COL2) << moyennes.moyenne1 << setw(COL3) << moyennes.moyenne2 << setw(COL4) << moyennes.moyenne3 << setw(COL5) << moyennes.moyenne4 << endl;
   canal << setfill('-') << setw(LARGEUR) << "-" << endl;
   canal << setfill('-') << setw(LARGEUR) << "-" << endl;

}


