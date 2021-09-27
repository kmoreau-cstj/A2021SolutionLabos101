/* But : Utiliser des fonctions existantes et se familiariser avec le vocabulaire des fonctions
*  Demander deux nombres � l'utilisateur : Le premier sera la base et le deuxi�me la puissance. Le programme appelle une fonction math�matique
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
   setlocale(LC_ALL, "");         // Le type de cette fonction peut �tre void

                                  // TODO : D�claration des constantes

   // TODO : D�claration des variables
   double base;
   double puissance;
   double resultat;
   char caractere;

   cout << "Veuillez entrer la valeur de la base : ";
   cin >> base;
   cout << "Veuillez entrer la valeur de la puissance : ";
   cin >> puissance;

   // On calcule le r�sultat de la base � la puissance en faisant appel � une fonction de la biblioth�que math.h
   // Appel signifie utilisation de la fonction, ex�cution de la fonction d�j� existance
   resultat = pow(base, puissance);       // Appel de la fonction, elle retourne une valeur(int float, double, char )

   cout << base << " � la puissance de " << puissance << " donne " << resultat << endl;

   cout << base << " � la puissance de " << puissance << " donne " << pow(base, puissance) << endl; // Appel de la fonction pow

   // Arrondir � l'inf�rieur la base et arrondir au sup�rieur la puissance et en faire le calcul

   cout << floor(base) << " � la puissance de " << ceil(puissance) << " donne " << pow(floor(base), ceil(puissance)) << endl; // Appel de la fonction pow

   // Demander � l'utilisateur un caract�re
   cout << "Veuillez entrer un caract�re :";
   cin >> caractere;

   // Le programme indique si le caractere est un chiffre ou une lettre en utilisant des fonctions pr�d�finies
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

//Plan de tests         �cran 
// 
   /*
    
   
   
   
   */
   


   




