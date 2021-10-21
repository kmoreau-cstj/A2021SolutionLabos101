#include "Labo06Fonctions.h"



bool etreNombreEntier(string clavier)
{
	// Premier cas c'est un nombre positif
	/*
	if (isdigit(clavier.front()))
		return true;
	if (isdigit(clavier.at(1) && clavier.front() == '-'))
		return true;
	return false;
	*/

	
	if (!clavier.empty() && clavier.front() >= '0' && clavier.front() <= '9')
	{
		return true;
	}
	else
	{
		// Deuxi�me cas : le nombre est n�gatif : ;a longueur de la chaine doit �tre d'au moins deux caract�res
		if (clavier.size() >=2 && clavier.front()== '-' && clavier.at(1) >= '0' && clavier[1] <='9')
 		{
			return true;
		}
	}
	return false;
	
}
