// But : Utiliser les vecteurs pour stocker une grande quantité de valeurs de même type
// Auteur : Karine Moreau
// Date : 2021-11-01


#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;



int main()
{
   setlocale(LC_ALL, "");
  
   // Déclaration des constantes
   const int NB_ETUDIANTS = 10;

   // Déclaration des variables
   vector<double> vecNote;                   // VecNote est créé mais ne contient aucune case : C'est un contenant vide
   vector<double> vecNotePlein(NB_ETUDIANTS);      // Avec les () on appelle le constructeur de la classe vector et on passe le nombre d'éléments que doit contenir le vecteur
                                                   // ici on a 10 cases pour mettre des doubles et elles ont la valeur par défaut qui est 0;
                                                   // La première case porte le numéro 0, la dernière NB_ETUDIANT -1 : donc 9
   vector<double> vecNotePassage(NB_ETUDIANTS, 60);   // ici on appelle encore le constructeur, mais deux paramètres. Le deuxième n'aura pas la valeur par défaut, mais 60 .
                                                      // Donc toutes les cases auront comme valeur de départ 60.

   vector<char> vecVoyelles{ 'a', 'e','i', 'o', 'u', 'y' };  // Le vecteur aura 6 cases chacune ayant une valeur différente

   vector<float> vecReel{ 12.5, 85.125, 45.3, 12, 0, 75.321 };
   
   double somme = 0;



   // Afficher le contenu du vecteur : Il faut aller chercher le contenu de chaque case et l'afficher. Pour parcourir chaque case, il faut une boucle for
   for (int indice = 0 ; indice < vecVoyelles.size(); indice++)
   {
      cout << "Voyelle #" << indice + 1 << " : " << vecVoyelles.at(indice) << endl;
   }

   // Et si on tente d'afficher un vecteur vide
   cout << "Afficher le contenu d'un vecteur vide : ";
   for (int numCase = 0; numCase < vecNote.size(); numCase++)
   {
      cout << "note #" << numCase + 1 << " : " << vecNote.at(numCase) << endl;
   }

   for (int i = 0; i < vecNotePassage.size(); i++)
   {
      cout << "Note de l'étudiant #" << i + 1 << " : " << vecNotePassage[i] << endl;
   }

   // On veut demander à l'utilisateur les notes que les étudiants ont obtenues
   for (int numEtudiant = 0; numEtudiant < vecNotePlein.size(); numEtudiant++)
   {
      cout << "Veuillez entrer la note de l'étudiant #" << numEtudiant + 1 << " : ";
      cin >> vecNotePlein.at(numEtudiant);
      //cin >> vecNotePlein[numEtudiant];

   }
   // On confirme les notes rentrées
   for (int i = 0; i < vecNotePlein.size(); i++)
   {
      cout << "Note de l'étudiant #" << i + 1 << " : " << vecNotePlein[i] << endl;
   }




   // On veut calculer la moyenne du groupe
   for (int i = 0; i < vecNotePlein.size(); i++)
   {
      somme = somme + vecNotePlein[i];
   }

   cout << "La moyenne du groupe est  : " << somme / vecNotePlein.size() << endl;

   // On veut trier le vecteur de note en ordre croissant
   sort(vecNotePlein.begin(), vecNotePlein.end());

   // On confirme les notes rentrées
   for (int i = 0; i < vecNotePlein.size(); i++)
   {
      cout << "Note  #" << i + 1 << " : " << vecNotePlein[i] << endl;
   }




   system("pause");
   return 0;
}