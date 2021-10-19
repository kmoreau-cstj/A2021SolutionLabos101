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
		// Deuxi�me cas : le premier caract�re n'est pas un chiffre
		if (clavier.front() < '0' || clavier.front() > '9')
		{
			return false;
		}
		else
		{
			
			// troisi�me cas, est-ce que le nombre est un nombre n�gatif
			if (clavier.size() <= 1)
			{
				// Cas d'erreur car pour un nombre n�gatif, la chaine doit �tre au moins de longueur 2 pour le - suivi d'un chiffre
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
						// La taille de la chaine est au moins 2, le premier caract�re est le signe - et le deuxi�me caract�re est un chiffre
						return true;
					}

				}

			}
		}
	}
}
