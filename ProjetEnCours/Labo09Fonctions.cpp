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

int calculerFrequence(const vector<int>& vec, int valeur)
{
   int nbValeur = 0;
   for (int i = 0; i < vec.size(); i++)
   {
      if (vec[i] == valeur)
      {
         nbValeur++;
      }
   }
   return nbValeur;
}

vector<int> ajouterValeurALaFinVecteur(vector<int> vecEntier, int valeur)
{
   valeur++;
   vecEntier.push_back(valeur);
   return vecEntier;
}


void ajouterValeurALaFinVecteur(vector<int>& vecEntier, int valeur)
{
   valeur++;
   vecEntier.push_back(valeur);
  
}

void echangerContenuDesVerres(int& VerreBleu, int& VerreRouge)
{
   int VerreVert = VerreBleu;
   VerreBleu = VerreRouge;
   VerreRouge = VerreVert;
}
