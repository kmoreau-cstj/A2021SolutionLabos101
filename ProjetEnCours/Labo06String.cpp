// But : Utiliser le type string et ses m�thodes
// Auteur : Karine Moreau
// Date : 2021-10-18


#include <iostream>
#include <string>

using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   // D�claration des variables
   string prenom;             // On cr�e un objet qui va stocker une s�rie de caract�res : chaine de caract�res : string
   string adresse;            // cette variable est automatiquement initialis�e � chaine vide : "" par le constructeur
   string paragraphe;

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

   string chaine2("Bonjour � tous ! Bienvenue dans le cours de programmation 12345!");
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




   system("pause");
   return 0;
}