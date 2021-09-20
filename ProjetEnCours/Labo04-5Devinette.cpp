// But : Devinette 
// A la fin le programme affiche la bonne note.

// Auteur :  Karine Moreau
// Date : 2021-09-16

#include <iostream>
#include <time.h>

using namespace std;


int main()
{
   // Déclaration des constantes
   const int NB_CHANCES = 5;
   const int MIN = 0;
   const int MAX = 100;

   // Déclaration des variables
   int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
   int nbEssais = NB_CHANCES;    // Ici on commence avec 5 chances
   int nb;                       // Les nombres que l'utilisateur va entrer

   setlocale(LC_ALL, "");
   srand(time(0)); // pour activer l’aléatoire dans le programme
   random = rand() % (MAX - MIN +1) + MIN; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random

   // on affiche le nombre à trouver pour pouvoir tester le programme
   cout << "Nombre à trouver est " << random << endl;

   // On demande à l'utilisateur un premier nombre
   cout << "Vous avez " << nbEssais << " pour trouver une nombre compris entre " << MIN << " et " << MAX << "." << endl;
   cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
   cin >> nb;

   // Avant de vérifier si le nombre est le gagnant, le programme s'assure que le nombre est bien compris entre 0 et 100
   while (nb < MIN || nb > MAX)
   {
      cout << "Erreur  : le nombre entré n'est pas compris entre " << MIN << " et " << MAX << "." << endl;
      cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
      cin >> nb;
   }
   /*while (!(nb >= MIN && nb <= MAX))
   {

   }
   */

   // Si on est là dans la programme nb est bien compris entre 0 et 100
   // Il a utilisé un essai
   nbEssais--;

   // Si le nb == random alors c'est gagné, sinon on enlève une chance s'il en reste.
   // on doit répéter tant que le nombre est pas le bon et qu'il reste des chances
   while (nb != random && nbEssais >= 1)
   {
      cout << "Ce n'est pas le bon nombre, il vous reste " << nbEssais << " chance(s)." << endl;

      cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
      cin >> nb;
      while (nb < MIN || nb > MAX)
      {
         cout << "Erreur  : le nombre entré n'est pas compris entre " << MIN << " et " << MAX << "." << endl;
         cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
         cin >> nb;
      }
      nbEssais--;
   }

   // Quand on quitte la boucle il y a deux possibilités
   // 1. L'utilisateur a trouvé le bon nombre
   // 2. L'utilisateur a épuisé tous les essais. On lui affiche le bon nombre.
   if (nb==random)
   {
      cout << "Bravo, vous avez trouvé le bon nombre en " << NB_CHANCES - nbEssais << " essai(s)." << endl;
   }
   else
   {
      cout << "Dommage, le bon nombre était " << random << endl;
   }


   system("pause");
   return 0;
}

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




