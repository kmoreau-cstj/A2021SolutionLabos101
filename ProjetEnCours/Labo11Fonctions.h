#pragma once


// Liste de toutes les biblioth�ques qui seront utilis�es dans ce projet
#include <iostream>
#include <fstream>      // Biblioth�que pour fournir les outils permettant de lire ou �crire dans des fichiers. f pour file et stream pour canal, voie de circulation des donn�es
#include <string>
#include <iomanip>

using namespace std;


// Liste des constantes : qui seront disponibles partout dans le projet : 
// Il n'y a pas de danger de mettre ces constantes visibles par tous, car leur contenu ne peut pas changer. 
// Cela ne serait pas le cas d'une variable, cela ne serait pas une bonne pratique de programmation. Les variables doivent �tre d�clar�es � l'int�rieur d'une fonction.

 // D�claration des constantes
const string NOM_FICHIER = "Donnees.txt";
const string RESULTAT = "Resultats.txt";
const string TITRE = "R�sultats du cours d'objets connect�s";
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
const int LARGEUR = COL1 + COL2 + COL3 + COL4 + COL5 + COL6;


// Liste des types de variables que l'on cr�e nous-m�me rassemblant plusieurs donn�es formant un tout : 
struct etudiantNotes
{
   // Il faut cr�er autant de variables qu'il y a de champs(colonne) dans le fichier
   string nomEtudiant;
   double examen1;
   double examen2;
   double examenFinal;
};


struct resultats
{
   double total;
   double moyenne1 = 0;
   double moyenne2 = 0;
   double moyenne3 = 0;
   double moyenne4 = 0;
   int nbEtudiants = 0;

};


// Liste des prototypes des fonctions
ifstream ouvrirFichierEnLecture(string nomFichier);
ofstream ouvrirFichierEnEcriture(string nomFichier);

void ecrireEnTete(ofstream& canal, int nbDecimales);

etudiantNotes lireEnregistrement(ifstream& canal);

void lireEnregistrement(ifstream& canal, etudiantNotes& resultatsEtudiant);

resultats calculerResultats(etudiantNotes resultatsEtudiant);
void calculerResultats(etudiantNotes resultatsEtudiant, resultats& moyennes);

void ecrireEnregistrement(ofstream& canal, etudiantNotes resultatsEtudiant, resultats moyennes);

void calculerMoyenne(resultats& moyennes);

void ecrirePiedDePage(ofstream& canal, resultats moyennes);

