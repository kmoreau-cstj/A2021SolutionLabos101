// But : Écrire un programme qui demande deux nombres entiers à l'utilisateur,
// calcule la somme de ces deux nombres et l'affiche à l'écran
// Auteur : Karine Moreau
// Date : 2021-08-30


#include <iostream>

void main()
{
	// Ici on va réserver de la place en mémoire pour mémoriser les valeurs fournies 
	// par l'utilisateur. Il faut déclarer des variables. Une variable est un emplacement
	// mémoire dont le contenu peut varier : être changé.
	// Pour déclarer une variable, il faut deux informations :
	// 1. Le type de la variable (du texte (string 15 octets), un nombre entier (integer : int : 4 octets), 
	// nombre à virgule (float 4 octets, double 10 octets), un caractère (char 1 octet), 
	//								booléen, (bool 1 octet)) 
	// 2. un nom à la variable : ne doit pas commencer par un chiffre, pas d'espace dans le nom
	//							 commence par une lettre minuscule et 
	//							 les autres mots commencent par une masjucule, pas d'accent
	

	// Déclaration des variables
	int premierNombre;
	int deuxiemeNombre;
	int resultat;
	
	setlocale(LC_ALL, "");

	std::cout << "Veuillez entrer un premier nombre : ";
	// On va lire l'information tapée sur le clavier 
	// (périphérique d'entrée : input : canal d'entrée : cin)
	std::cin >> premierNombre;

	// On va vérifier que la variable contient la bonne information
	// On affiche le contenu de la variable à l'écran
	//std::cout << premierNombre;

	std::cout << "Veuillez entrer un deuxième nombre : ";
	// On va lire l'information tapée sur le clavier 
	// (périphérique d'entrée : input : canal d'entrée : cin)
	std::cin >> deuxiemeNombre;

	// On va vérifier que la variable contient la bonne information
	// On affiche le contenu de la variable à l'écran
	//std::cout << deuxiemeNombre;

	// On fait la somme des deux nombres et on les mémorise dans une autre variable
	resultat = premierNombre + deuxiemeNombre;

	// On affiche le résultat à l'écran
	std::cout << premierNombre << "+" << deuxiemeNombre << "=" << resultat;


}