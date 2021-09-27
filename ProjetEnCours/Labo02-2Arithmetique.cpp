// But : Écrire un programme qui demande deux nombres entiers pour chaque opération arithmétique 
// (+ - * / modulo % pour les entiers seulement), 
// en fait le calcul et affiche le résultat
// Auteur : Karine Moreau
// Date : 2021-08-31

#include <iostream>		// Bibliothèque nécessaire pour tous les programmes pour dialoguer avec l'utilisateur (cin, cout)

void main()
{
	
	// Déclaration des variables
	int nb1;
	int nb2;
	int operation;	
	int resteDivisionEntiere;
	
	setlocale(LC_ALL, "");				// Pour les accents

	// Demander deux nombres à l'utilisateur
	std::cout << "Veuillez entrer un premier entier : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un deuxième entier : ";
	std::cin >> nb2;

	// Faire la somme des deux entiers
	operation = nb1 + nb2;

	// Afficher le résultat à l'écran. std::endl permet de passer à la ligne : end line => endl
	std::cout << nb1 << " + " << nb2 << " = " << operation << std::endl;

	// On recommence pour la soustraction
	// Demander deux nombres à l'utilisateur
	std::cout << "Veuillez entrer un premier entier : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un deuxième entier : ";
	std::cin >> nb2;
	// Faire la soustraction des deux entiers
	operation = nb1 - nb2;

	// Afficher le résultat à l'écran. Pour passer à la ligne on utilise le caractère d'échappement \ et n pour new ligne
	std::cout << nb1 << "\t-\t" << nb2 << "\t=\t" << operation << "\n";

	// Demander deux nombres à l'utilisateur
	std::cout << "Veuillez entrer un premier entier : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un deuxième entier : ";
	std::cin >> nb2;

	// Faire la multiplication des deux entiers
	operation = nb1 * nb2;

	// Afficher le résultat à l'écran. std::endl permet de passer à la ligne : end line => endl
	std::cout << nb1 << " * " << nb2 << " = " << operation << std::endl;

	// Demander deux nombres à l'utilisateur
	std::cout << "Veuillez entrer un premier entier : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un deuxième entier : ";
	std::cin >> nb2;

	// Faire la division des deux entiers
	// ATTENTION : on ne peut pas diviser par 0, donc on doit tester si nb2 est bien différent de 0 pour faire la division
	// Si nb2 est différent de 0 on fait la division, sinon on affiche un message d'erreur
	if (nb2 !=0 )
	{
		operation = nb1 / nb2;
		resteDivisionEntiere = nb1 % nb2;

		// Afficher le résultat à l'écran. std::endl permet de passer à la ligne : end line => endl
		std::cout << nb1 << " / " << nb2 << " = " << operation << " reste " << resteDivisionEntiere <<  std::endl;
	}
	else
	{
		std::cout << "Division par zéro impossible \n";
	}
	
}

