// But : Utiliser les vecteurs pour stocker une grande quantit� de valeurs de m�me type
/*   Soit vec de type entier dont voici la d�claration et la liste de son contenu :
vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };


1.	Afficher la taille du vecteur.
2.	Afficher le contenu de la premi�re case.
3.	Afficher le contenu de la derni�re case.
4.	Afficher le nombre de cases qui contiennent une valeur nulle.
5.	Afficher le num�ro de la case et son contenu sous la forme vec[#] = Valeur.
6.	Afficher les cases du vecteur dont le contenu est pair.
7.	Afficher le vecteur en commen�ant par la fin.
8.	Afficher dans un premier temps uniquement les cases d'indice pair et dans un deuxi�me temps les cases d'indice impair.

*/
// 
// Auteur : Karine Moreau
// Date : 2021-11-01


#include "Labo09Fonctions.h"



int main()
{
   setlocale(LC_ALL, "");
  
   // D�claration des constantes


   // D�claration des variables
   vector<float> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };
   int nbZero = 0;


   // Afficher le nombre d'�l�ments du vecteur
   cout << "le nombre d'�l�ments du vecteur est : " << vec.size() << endl;

   // Afficher le contenu de la premi�re case de trois fa�ons diff�rentes
   cout << "La valeur de la premi�re case : " << vec.at(0) << endl;
   cout << "La valeur de la premi�re case : " << vec[0] << endl;
   cout << "La valeur de la premi�re case : " << vec.front() << endl;

   // Afficher le contenu de la derni�re case de trois fa�ons diff�rentes
   cout << "La valeur de la derni�re case : " << vec.back() << endl;
   cout << "La valeur de la derni�re case : " << vec.at(vec.size() - 1) << endl;
   cout << "La valeur de la derni�re case : " << vec[vec.size() - 1] << endl;

   // Afficher le nombre de cases qui contiennent une valeur nulle
   for (int i = 0; i < vec.size(); i++)
   {
      if (vec.at(i)==0)
         nbZero++;
   }
   cout << "Le nombre de z�ro dans le vecteur est " << nbZero << endl;


   // Afficher le num�ro de la case et son contenu sous la forme vec[#] = Valeur.
   for (int i = 0; i < vec.size(); i++)
   {
      cout << "vec[" << i << "] : " << vec[i] << endl;
   }

   //Afficher les cases du vecteur dont le contenu est pair
   /*for (int i = 0; i < vec.size(); i++)
   {
      if (vec.at(i)%2 ==0)
      {
         cout << "vec[" << i << "] : " << vec[i] << endl;
      }
   }
   */
   // Afficher le vecteur en commen�ant par la fin.
   for (int i = vec.size()-1; i >= 0; i--)
   {
      cout << "vec[" << i << "] : " << vec[i] << endl;

   }

   // Afficher dans un premier temps uniquement les cases d'indice pair et dans un deuxi�me temps les cases d'indice impair


   // Supprimer du vecteur les cases de valeur nulle
   /*for (int i = 0; i < vec.size(); i++)
   {
      if (vec.at(i)==0)
      {
         vec.erase(vec.begin() + i);
         i--;
      }
   }
   cout << "Apr�s la suppression des cases nulles" << endl;
   for (int i = 0; i <vec.size(); i++)
   {
      cout << "vec[" << i << "] : " << vec[i] << endl;

   }
   */
   // Deuxi�me version : id�e de Rapha�l : on commence par la fin
   for (int i = vec.size()-1; i >= 0; i--)
   {
      if (vec.at(i) == 0)
      {
         vec.erase(vec.begin() + i);
      }
   }
   cout << "Apr�s la suppression des cases nulles" << endl;
   afficherVecteur(vec);



   system("pause");
   return 0;
}