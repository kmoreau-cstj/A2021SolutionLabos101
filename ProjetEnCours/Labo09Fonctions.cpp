#include "Labo09Fonctions.h"

void afficherVecteur(vector<int> vec)
{
   for (int i = 0; i < vec.size(); i++)
   {
      cout << "vec[" << i << "] : " << vec[i] << endl;
   }
}

void afficherVecteur(vector<double> vec)
{
   for (int i = 0; i < vec.size(); i++)
   {
      cout << "vec[" << i << "] : " << vec[i] << endl;
   }
}

void afficherVecteur(vector<char> vec)
{
   for (int i = 0; i < vec.size(); i++)
   {
      cout << "vec[" << i << "] : " << vec[i] << endl;
   }
}

void afficherVecteur(vector<float> vec)
{
   for (int i = 0; i < vec.size(); i++)
   {
      cout << "vec[" << i << "] : " << vec[i] << endl;
   }
}

void afficherVecteur(vector<string> vec)
{
   for (int i = 0; i < vec.size(); i++)
   {
      cout << "vec[" << i << "] : " << vec[i] << endl;
   }
}