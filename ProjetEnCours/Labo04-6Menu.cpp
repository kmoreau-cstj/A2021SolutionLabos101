// But : Afficher à l'écran le menu suivant
/*
a. Addition
b. Soustraction
c. Multiplication
d. Division
e. Quitter

Le programme demande à l'utilisateur son choix et s'assure que le choix est bien compris entre a et e.

Le programme confirme le choix de l'utilisateur en écrivant en toute lettre l'opérateur choisi
et réaffiche le menu tant que l'utilisateur ne choisit pas de quitter
*/
  
// Auteur :  Karine Moreau
// Date : 2021-09-20

#include <iostream>
#include <time.h>

using namespace std;


int main()
{

   // Déclaration des variables
   char choix;
   // On veut afficher le menu toujours en haut de l'écran : on efface l'écran avec la commande clear screen => cls
   system("cls");
   cout << "a. Addition" << endl;
   cout << "b. Soustraction" << endl;
   cout << "c. Multiplication" << endl;
   cout << "d. Division" << endl;
   cout << "e. Quitter" << endl;
   cin >> choix;

   // TODO : Le programme doit afficher un message d'erreur, si le choix n'est pas compris entre a et e
   while (!((choix >='a' && choix <='e') || (choix >='A' && choix <='E')))
   {
      cout << "Erreur : Le choix n'est pas compris entre a et e." << endl;
      system("pause");

      // On veut afficher le menu toujours en haut de l'écran : on efface l'écran avec la commande clear screen => cls
      system("cls");
      cout << "a. Addition" << endl;
      cout << "b. Soustraction" << endl;
      cout << "c. Multiplication" << endl;
      cout << "d. Division" << endl;
      cout << "e. Quitter" << endl;
      cin >> choix;

   }

   // Ici, on est sûr que le choix est compris entre a et e



   // TODO : Tant que l'utilisateur ne choisit pas de quitter, le programme confirme son choix en toute lettre
   while (choix !='e' && choix != 'E')
   {
      /*if (choix == 'a' || choix == 'A')
      {
         cout << "vous avez choisi l'addition\n";
      }
      else if (choix == 'b' || choix == 'B')
      {
         cout << "vous avez choisi la soustraction\n";
      }
      else if(choix == 'c' || choix == 'C')
      {
         cout << "vous avez choisi la multiplication\n";
      }
      else
      {
         cout << "vous avez choisi la division\n";
      }*/

      switch (choix)
      {
         case 'a' :
         case 'A' :
            cout << "vous avez choisi l'addition\n";
            break;
         case 'b':
         case 'B':
            cout << "vous avez choisi la soustraction\n";
            break;
         case 'c':
         case 'C':
            cout << "vous avez choisi la multiplication\n";
            break;
         default:
               cout << "vous avez choisi la division\n";
             break;
      }


      system("pause");
      // On doit redemander un nouveau choix à l'utilisateur
      // On veut afficher le menu toujours en haut de l'écran : on efface l'écran avec la commande clear screen => cls
      system("cls");
      cout << "a. Addition" << endl;
      cout << "b. Soustraction" << endl;
      cout << "c. Multiplication" << endl;
      cout << "d. Division" << endl;
      cout << "e. Quitter" << endl;
      cin >> choix;

      // TODO : Le programme doit afficher un message d'erreur, si le choix n'est pas compris entre a et e
      while (!((choix >= 'a' && choix <= 'e') || (choix >= 'A' && choix <= 'E')))
      {
         cout << "Erreur : Le choix n'est pas compris entre a et e." << endl;
         system("pause");

         // On veut afficher le menu toujours en haut de l'écran : on efface l'écran avec la commande clear screen => cls
         system("cls");
         cout << "a. Addition" << endl;
         cout << "b. Soustraction" << endl;
         cout << "c. Multiplication" << endl;
         cout << "d. Division" << endl;
         cout << "e. Quitter" << endl;
         cin >> choix;

      }

   }








   system("pause");
   return 0;
}

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




