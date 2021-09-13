// But : Le programme demande à l'utilisateur 5 notes. Il calcule la moyenne du groupe et l'affiche à l'écran.
// Auteur :  Karine Moreau
// Date : 2021-09-13

#include <iostream>

using namespace std;

void main()
{ 
   setlocale(LC_ALL, "");
   // Déclaration des constantes qui doivent être initialisées à leur déclaration
   const int NB_NOTES = 5;

   // Déclare mes variables 
   // il y a les variables pour les informations fournies par l'utilisateur. 
   // C'est la responsabilité de l'utilisateur de fournir cette information.
   double note;
   // Il y a les variables pour calculer le résultat. 
   // C'est la responsabilité du programmeur d'initialiser (donner une valeur de départ) les variabes de résultat
   double moyenne=0;    // Au départ, il y a aucune note de connues donc la moyenne est à 0.

 
   // On ne doit pas copier coller les MÊMES instructions. On DOIT les mettre dans une boucle
   for (int compteur = 1; compteur <= NB_NOTES; compteur++)
   {
     // On demande à l'utilisateur une note
      cout << "Veuillez entrer une note : ";
      cin >> note;

      // On doit ajouter cette note à la variable moyenne
      moyenne = moyenne + note;
   }

   // Il faut calculer la moyenne en divisant par le nombre total de notes
   moyenne = moyenne / NB_NOTES;
   // On affiche le résultat à l'écran
   cout << "La moyenne du groupe est de " << moyenne << endl;

  
   system("pause");

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




}