/* But : cr�er notre propre fonction qui calcule le carr� d'un nombre
* 1. Il faut cr�er notre biblioth�que
* 2. Dans la biblioth�que, il faut cr�er le prototype de la fonction : 
     mode d'emploi, comment utiliser la fonction, savoir son nom et les param�tres dont elle a besoin
* 3. il faut cr�er la d�finition de la fonction : de dire les instructions que la fonction doit ex�cuter
* 4. il faut appeler la fonction pour valider ou tester son fonctionnement
// Auteur :  Karine Moreau
// Date : 2021-09-27
*/
#include <iostream>
#include <time.h>
#include <math.h>
#include "Labo05FonctionMath.h"

using namespace std;


int main()
{
   setlocale(LC_ALL, "");         

   // TODO : D�claration des constantes

   // TODO : D�claration des variables
   double nb;

   cout << "Veuillez entrer un nombre pour calculer son carr� : ";
   cin >> nb;

   cout << "Le carr� de " << nb << " est " << calculerCarre(nb) << endl;
 


   system("pause");
   return 0;
}

//Plan de tests         �cran 
// 
   /*
    
   
   
   
   */
   


   




