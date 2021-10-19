// But : Utiliser le type string et ses m�thodes
// Auteur : Karine Moreau
// Date : 2021-10-18


#include <iostream>
#include <string>
#include "Labo06Fonctions.h"

using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // D�claration des variables
   string prenom;             // On cr�e un objet qui va stocker une s�rie de caract�res : chaine de caract�res : string
   string adresse;            // cette variable est automatiquement initialis�e � chaine vide : "" par le constructeur
   string paragraphe;

   string test = { 'K', 'e' };
   int nombre;

   string clavier;

   // But : Toutes les informations demand�es � l'utilisateur doivent �tre saisies dans une variable de type string pour s'assurer que toute la m�moire du clavier soit lue
   cout << "Veuillez entrer un nombre entier : ";
   //cin >> nombre;
   getline(cin, clavier, '\n');

   // Il faut convertir l'information dans clavier et la mettre dans nombre
   // Ici si clavier est vide, �a plante
   // Si clavier commence par des lettres �a plante
   // On ne peut pas envoyer � stoi n'importe quelle chaine de caract�res. Elle ne doit pas �tre vide et elle doit commencer par un chiffre ou le signe moins suivi d'un chiffre

   while ( !etreNombreEntier(clavier))
   {
      cout << "Erreur : Le nombre doit commencer par un chiffre ou le signe - suivi d'un chiffre." << endl;
      cout << "Veuillez entrer un nombre entier : ";
      //cin >> nombre;
      getline(cin, clavier, '\n');

   }

   nombre = stoi(clavier);

   cout << "Le nombre est " << nombre << endl;








   /*
   cout << test << endl;

   cout << prenom << endl;

   cout << "La taille de pr�nom : " << prenom.size() << endl;
   cout << "La capacit� de pr�nom : " << prenom.capacity() << endl;
   cout << "La max_size de pr�nom : " << prenom.max_size() << endl;
   cout << "La longueur de pr�nom : " << prenom.length() << endl;

   string chaine1("Bonjour");    // On appelle le constructeur et on lui passe un param�tre pour initialiser la variable avec le texte de notre choix

   cout << chaine1 << endl;
   cout << "La taille de chaine 1 : " << chaine1.size() << endl;
   cout << "La capacit� de chaine 1 : " << chaine1.capacity() << endl;
   cout << "La longueur de chaine 1 : " << chaine1.length() << endl;

   string chaine2("� tous !");
   cout << chaine2 << endl;
   cout << "La taille de chaine 2 : " << chaine2.size() << endl;
   cout << "La capacit� de chaine 2 : " << chaine2.capacity() << endl;
   cout << "La longueur de chaine 2 : " << chaine2.length() << endl;

   // Op�rateur d'affectation avec les string permet de copier une chaine dans une autre
   prenom = "Karine";

   cout << "Veuillez indiquer votre pr�nom :" << endl; // ici on tape Karine suivi de enter
   cin >> prenom ;                                      // cin >> lit tous les caract�res avant le enter ou l'espace ou tabulation et les copie dans la variable pr�nom
   // Vider la m�moire du clavier
   //cin.ignore();        // par d�faut ignore 1 caract�re ou le \n
   //cin.ignore(4);       // va ignorer au maximum 4 ou le \n
   //cin.ignore(5, '*');  // Va ignorer au maximum 5 caract�res ou l'�toile abcdef abc*
   cin.ignore(1, '\n');
   //getline(cin, prenom, '\n');

   cout << "Vous vous appelez " << prenom << endl;    // cin >> ne retire pas son d�limiteur de la m�moire du clavier

   cout << "Veuillez entrer votre adresse : ";
   //cin >> adresse;                  // On constate que le cin >> s�pare les valeurs avec un enter, un espace ou une tabulation.
                                    // Il arr�te de lire le clavier d�s qu'il recncontre l'un de ces trois caract�res

   // Probl�me ici avec l'adresse, on ne peut pas mettre d'espace
   getline(cin, adresse, '\n');                       // ici le cin >> a laiss� le \n dans la m�moire du clavier, le getline rencontre le \n et se termine en lisant rien
                                                      // Le probl�me apparait toujours si dans le m�me programme on utilise � la fois des cin >> et des getline.
                                                      // Apr�s l'utilisation de cin >>, il va falloir vider la m�moire du clavier car il reste toujours le \n.

   cout << "Vous habitez au " << adresse << endl;

   cout << "Veuillez vous pr�senter :";
   getline(cin, paragraphe, '*');
   cout << "Voici votre pr�sentation" << paragraphe << endl;


   if (prenom == "Karine")
   {
      cout << prenom << " est votre amie !" << endl;
   }
   else
   {
      cout << prenom << " n'est pas votre amie !" << endl;
   }
   if (prenom >= "Arthur")
   {
      cout << prenom << " est apr�s Arthur." << endl;
   }
   if (prenom <= "Zoe")
   {
      cout << prenom << " vient avant Zoe" << endl;
   }


   // On veut concat�ner deux chaines ensemble on utilise l'op�rateur +
   //chaine1 = chaine1 + " " + chaine2 + "\n";
   chaine1 += " " + chaine2 + "\n";
   cout << chaine1;
   
   cout << "Veuillez entrer votre pr�nom : ";
   getline(cin, prenom, '\n');

   while (prenom.empty())
   {
      cout << "Erreur : vous devez entrer un pr�nom : ";
      getline(cin, prenom, '\n');
   }

   cout << "Votre initiale est " << prenom[0] << endl;
   cout << "Votre initiale est " << prenom.at(0) << endl;
   cout << "Votre initiale est " << prenom.front() << endl;

   cout << "La derni�re lettre du pr�nom : " << prenom[prenom.size()-1] << endl;
   cout << "La derni�re lettre du pr�nom : " << prenom.at(prenom.size()-1) << endl;
   cout << "La derni�re lettre du pr�nom : " << prenom.back() << endl;

   // Effacer le pr�nom
   prenom = "";
   cout << "votre pr�nom effac� : " << prenom << endl;

   prenom = "Karine";
   // Efface toute la chaine
   prenom.clear();
   cout << "votre pr�nom effac� : " << prenom << endl;

   prenom = "Karine";

   // Permet d'effacer un �l�ment pr�cis dans la chaine : La position � partir de laquelle on efface et combien de caract�res on efface
   prenom.erase(2,4);

   cout << "votre pr�nom effac� : " << prenom << endl;

   */



   system("pause");
   return 0;
}