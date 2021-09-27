/* But : Utiliser des fonctions existantes et se familiariser avec le vocabulaire des fonctions
*  Demander deux nombres à l'utilisateur : Le premier sera la base et le deuxième la puissance. Le programme appelle une fonction mathématique
* pour calculer la puissance de la base.
// Auteur :  Karine Moreau
// Date : 2021-09-27
*/
#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;


int main()
{
   setlocale(LC_ALL, "");         // Le type de cette fonction peut être void

                                  // TODO : Déclaration des constantes

   // TODO : Déclaration des variables
   double base;
   double puissance;
   double resultat;
   char caractere;

   cout << "Veuillez entrer la valeur de la base : ";
   cin >> base;
   cout << "Veuillez entrer la valeur de la puissance : ";
   cin >> puissance;

   // On calcule le résultat de la base à la puissance en faisant appel à une fonction de la bibliothèque math.h
   // Appel signifie utilisation de la fonction, exécution de la fonction déjà existance
   resultat = pow(base, puissance);       // Appel de la fonction, elle retourne une valeur(int float, double, char )

   cout << base << " à la puissance de " << puissance << " donne " << resultat << endl;

   cout << base << " à la puissance de " << puissance << " donne " << pow(base, puissance) << endl; // Appel de la fonction pow

   // Arrondir à l'inférieur la base et arrondir au supérieur la puissance et en faire le calcul

   cout << floor(base) << " à la puissance de " << ceil(puissance) << " donne " << pow(floor(base), ceil(puissance)) << endl; // Appel de la fonction pow

   // Demander à l'utilisateur un caractère
   cout << "Veuillez entrer un caractère :";
   cin >> caractere;

   // Le programme indique si le caractere est un chiffre ou une lettre en utilisant des fonctions prédéfinies
   if (isdigit(caractere))    // Appel d'une fonction qui retourne un bool (vrai ou faux)
      
   {
      cout << caractere << " est un chiffre" << endl;
   }
   else  if (isalpha(caractere))
   {
      cout << caractere << " est une lettre" << endl;
   }
   else
   {
      cout << caractere << " est ni une lettre ni un chiffre" << endl;
   }

  



   system("pause");
   return 0;
}

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




