// But : Devinette  
// A la fin le programme affiche la bonne note.
  
// Auteur :  Karine Moreau
// Date : 2021-09-16

#include <iostream>
#include <time.h>

using namespace std;


int main()
{
   // D�claration des constantes
   const int NB_CHANCES = 5;
   const int MIN = 0;
   const int MAX = 100;

   // D�claration des variables
   int random; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
   int nbEssais = NB_CHANCES;    // Ici on commence avec 5 chances
   int nb;                       // Les nombres que l'utilisateur va entrer

   setlocale(LC_ALL, "");
   srand(time(0)); // pour activer l�al�atoire dans le programme
   random = rand() % (MAX - MIN +1) + MIN; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans random

   // on affiche le nombre � trouver pour pouvoir tester le programme
   cout << "Nombre � trouver est " << random << endl;

   // On demande � l'utilisateur un premier nombre
   cout << "Vous avez " << nbEssais << " pour trouver une nombre compris entre " << MIN << " et " << MAX << "." << endl;
   cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
   cin >> nb;

   // Avant de v�rifier si le nombre est le gagnant, le programme s'assure que le nombre est bien compris entre 0 et 100
   while (nb < MIN || nb > MAX)
   {
      cout << "Erreur  : le nombre entr� n'est pas compris entre " << MIN << " et " << MAX << "." << endl;
      cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
      cin >> nb;
   }
   /*while (!(nb >= MIN && nb <= MAX))
   {

   }
   */

   // Si on est l� dans la programme nb est bien compris entre 0 et 100
   // Il a utilis� un essai
   nbEssais--;

   // Si le nb == random alors c'est gagn�, sinon on enl�ve une chance s'il en reste.
   // on doit r�p�ter tant que le nombre est pas le bon et qu'il reste des chances
   while (nb != random && nbEssais >= 1)
   {
      cout << "Ce n'est pas le bon nombre, il vous reste " << nbEssais << " chance(s)." << endl;

      cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
      cin >> nb;
      while (nb < MIN || nb > MAX)
      {
         cout << "Erreur  : le nombre entr� n'est pas compris entre " << MIN << " et " << MAX << "." << endl;
         cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
         cin >> nb;
      }
      nbEssais--;
   }

   // Quand on quitte la boucle il y a deux possibilit�s
   // 1. L'utilisateur a trouv� le bon nombre
   // 2. L'utilisateur a �puis� tous les essais. On lui affiche le bon nombre.
   if (nb==random)
   {
      cout << "Bravo, vous avez trouv� le bon nombre en " << NB_CHANCES - nbEssais << " essai(s)." << endl;
   }
   else
   {
      cout << "Dommage, le bon nombre �tait " << random << endl;
   }


   system("pause");
   return 0;
}

//Plan de tests         �cran 
// 
   /*
    
   
   
   
   */
   


   




