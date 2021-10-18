// But : Utiliser le type string et ses méthodes
// Auteur : Karine Moreau
// Date : 2021-10-18


#include <iostream>
#include <string>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // Déclaration des variables
   string prenom;             // On crée un objet qui va stocker une série de caractères : chaine de caractères : string
   string adresse;            // cette variable est automatiquement initialisée à chaine vide : "" par le constructeur
   string paragraphe;

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

   string chaine2("Bonjour à tous ! Bienvenue dans le cours de programmation 12345!");
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




   system("pause");
   return 0;
}