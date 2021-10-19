#include "Labo06Fonctions.h"



bool etreNombreEntier(string clavier)
{
	// Premier cas qui dit que le clavier n'est pas un nombre
	if (clavier.empty())
	{
		return false;
	}
	else
	{
		// Deuxième cas : le premier caractère n'est pas un chiffre
		if (clavier.front() < '0' || clavier.front() > '9')
		{
			return false;
		}
		else
		{
			
			// troisième cas, est-ce que le nombre est un nombre négatif
			if (clavier.size() <= 1)
			{
				// Cas d'erreur car pour un nombre négatif, la chaine doit être au moins de longueur 2 pour le - suivi d'un chiffre
				return false;
			}
			else
			{
				if (clavier.front() != '-')
				{
					return false;
				}
				else
				{
					if (clavier.at(1) < '0' || clavier.at(1) > '9')
					{
						return false;
					}
					else
					{
						// La taille de la chaine est au moins 2, le premier caractère est le signe - et le deuxième caractère est un chiffre
						return true;
					}

				}

			}
		}
	}
}
