// But : Utiliser le type string et ses méthodes
// Auteur : Karine Moreau
// Date : 2021-10-18


#include <iostream>
#include <string>
#include "Labo06Fonctions.h"

using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // Déclaration des variables
   string prenom;             // On crée un objet qui va stocker une série de caractères : chaine de caractères : string
   string adresse;            // cette variable est automatiquement initialisée à chaine vide : "" par le constructeur
   string paragraphe;

   string test = { 'K', 'e' };
   int nombre;

   string clavier;

   // But : Toutes les informations demandées à l'utilisateur doivent être saisies dans une variable de type string pour s'assurer que toute la mémoire du clavier soit lue
   cout << "Veuillez entrer un nombre entier : ";
   //cin >> nombre;
   getline(cin, clavier, '\n');

   // Il faut convertir l'information dans clavier et la mettre dans nombre
   // Ici si clavier est vide, ça plante
   // Si clavier commence par des lettres ça plante
   // On ne peut pas envoyer à stoi n'importe quelle chaine de caractères. Elle ne doit pas être vide et elle doit commencer par un chiffre ou le signe moins suivi d'un chiffre

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

   cout << "La taille de prénom : " << prenom.size() << endl;
   cout << "La capacité de prénom : " << prenom.capacity() << endl;
   cout << "La max_size de prénom : " << prenom.max_size() << endl;
   cout << "La longueur de prénom : " << prenom.length() << endl;

   string chaine1("Bonjour");    // On appelle le constructeur et on lui passe un paramètre pour initialiser la variable avec le texte de notre choix

   cout << chaine1 << endl;
   cout << "La taille de chaine 1 : " << chaine1.size() << endl;
   cout << "La capacité de chaine 1 : " << chaine1.capacity() << endl;
   cout << "La longueur de chaine 1 : " << chaine1.length() << endl;

   string chaine2("à tous !");
   cout << chaine2 << endl;
   cout << "La taille de chaine 2 : " << chaine2.size() << endl;
   cout << "La capacité de chaine 2 : " << chaine2.capacity() << endl;
   cout << "La longueur de chaine 2 : " << chaine2.length() << endl;

   // Opérateur d'affectation avec les string permet de copier une chaine dans une autre
   prenom = "Karine";

   cout << "Veuillez indiquer votre prénom :" << endl; // ici on tape Karine suivi de enter
   cin >> prenom ;                                      // cin >> lit tous les caractères avant le enter ou l'espace ou tabulation et les copie dans la variable prénom
   // Vider la mémoire du clavier
   //cin.ignore();        // par défaut ignore 1 caractère ou le \n
   //cin.ignore(4);       // va ignorer au maximum 4 ou le \n
   //cin.ignore(5, '*');  // Va ignorer au maximum 5 caractères ou l'étoile abcdef abc*
   cin.ignore(1, '\n');
   //getline(cin, prenom, '\n');

   cout << "Vous vous appelez " << prenom << endl;    // cin >> ne retire pas son délimiteur de la mémoire du clavier

   cout << "Veuillez entrer votre adresse : ";
   //cin >> adresse;                  // On constate que le cin >> sépare les valeurs avec un enter, un espace ou une tabulation.
                                    // Il arrête de lire le clavier dès qu'il recncontre l'un de ces trois caractères

   // Problème ici avec l'adresse, on ne peut pas mettre d'espace
   getline(cin, adresse, '\n');                       // ici le cin >> a laissé le \n dans la mémoire du clavier, le getline rencontre le \n et se termine en lisant rien
                                                      // Le problème apparait toujours si dans le même programme on utilise à la fois des cin >> et des getline.
                                                      // Après l'utilisation de cin >>, il va falloir vider la mémoire du clavier car il reste toujours le \n.

   cout << "Vous habitez au " << adresse << endl;

   cout << "Veuillez vous présenter :";
   getline(cin, paragraphe, '*');
   cout << "Voici votre présentation" << paragraphe << endl;


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
      cout << prenom << " est après Arthur." << endl;
   }
   if (prenom <= "Zoe")
   {
      cout << prenom << " vient avant Zoe" << endl;
   }


   // On veut concaténer deux chaines ensemble on utilise l'opérateur +
   //chaine1 = chaine1 + " " + chaine2 + "\n";
   chaine1 += " " + chaine2 + "\n";
   cout << chaine1;
   
   cout << "Veuillez entrer votre prénom : ";
   getline(cin, prenom, '\n');

   while (prenom.empty())
   {
      cout << "Erreur : vous devez entrer un prénom : ";
      getline(cin, prenom, '\n');
   }

   cout << "Votre initiale est " << prenom[0] << endl;
   cout << "Votre initiale est " << prenom.at(0) << endl;
   cout << "Votre initiale est " << prenom.front() << endl;

   cout << "La dernière lettre du prénom : " << prenom[prenom.size()-1] << endl;
   cout << "La dernière lettre du prénom : " << prenom.at(prenom.size()-1) << endl;
   cout << "La dernière lettre du prénom : " << prenom.back() << endl;

   // Effacer le prénom
   prenom = "";
   cout << "votre prénom effacé : " << prenom << endl;

   prenom = "Karine";
   // Efface toute la chaine
   prenom.clear();
   cout << "votre prénom effacé : " << prenom << endl;

   prenom = "Karine";

   // Permet d'effacer un élément précis dans la chaine : La position à partir de laquelle on efface et combien de caractères on efface
   prenom.erase(2,4);

   cout << "votre prénom effacé : " << prenom << endl;

   */



   system("pause");
   return 0;
}