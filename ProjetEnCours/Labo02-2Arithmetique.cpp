// But : �crire un programme qui demande deux nombres entiers pour chaque op�ration arithm�tique 
// (+ - * / modulo % pour les entiers seulement), 
// en fait le calcul et affiche le r�sultat
// Auteur : Karine Moreau
// Date : 2021-08-31

#include <iostream>		// Biblioth�que n�cessaire pour tous les programmes pour dialoguer avec l'utilisateur (cin, cout)

void main()
{
	
	// D�claration des variables
	int nb1;
	int nb2;
	int operation;	
	int resteDivisionEntiere;
	
	setlocale(LC_ALL, "");				// Pour les accents

	// Demander deux nombres � l'utilisateur
	std::cout << "Veuillez entrer un premier entier : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un deuxi�me entier : ";
	std::cin >> nb2;

	// Faire la somme des deux entiers
	operation = nb1 + nb2;

	// Afficher le r�sultat � l'�cran. std::endl permet de passer � la ligne : end line => endl
	std::cout << nb1 << " + " << nb2 << " = " << operation << std::endl;

	// On recommence pour la soustraction
	// Demander deux nombres � l'utilisateur
	std::cout << "Veuillez entrer un premier entier : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un deuxi�me entier : ";
	std::cin >> nb2;
	// Faire la soustraction des deux entiers
	operation = nb1 - nb2;

	// Afficher le r�sultat � l'�cran. Pour passer � la ligne on utilise le caract�re d'�chappement \ et n pour new ligne
	std::cout << nb1 << "\t-\t" << nb2 << "\t=\t" << operation << "\n";

	// Demander deux nombres � l'utilisateur
	std::cout << "Veuillez entrer un premier entier : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un deuxi�me entier : ";
	std::cin >> nb2;

	// Faire la multiplication des deux entiers
	operation = nb1 * nb2;

	// Afficher le r�sultat � l'�cran. std::endl permet de passer � la ligne : end line => endl
	std::cout << nb1 << " * " << nb2 << " = " << operation << std::endl;

	// Demander deux nombres � l'utilisateur
	std::cout << "Veuillez entrer un premier entier : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer un deuxi�me entier : ";
	std::cin >> nb2;

	// Faire la division des deux entiers
	// ATTENTION : on ne peut pas diviser par 0, donc on doit tester si nb2 est bien diff�rent de 0 pour faire la division
	// Si nb2 est diff�rent de 0 on fait la division, sinon on affiche un message d'erreur
	if (nb2 !=0 )
	{
		operation = nb1 / nb2;
		resteDivisionEntiere = nb1 % nb2;

		// Afficher le r�sultat � l'�cran. std::endl permet de passer � la ligne : end line => endl
		std::cout << nb1 << " / " << nb2 << " = " << operation << " reste " << resteDivisionEntiere <<  std::endl;
	}
	else
	{
		std::cout << "Division par z�ro impossible \n";
	}
	
}

