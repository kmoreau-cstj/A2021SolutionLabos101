// But : Écrire un programme qui affiche un message à l'écran
// Auteur : Karine Moreau
// Date : 2021-08-26



// Il faut ouvrir un porte à notre programme. 
// Le programme recherche toujours la fonction principale pour commencer, 
// qui s'appelle toujours main
// n'importe quelle fonction dans un programme est suivie de parenthèses qui contiendront
// la liste des paramètres qui peut rester vide
// N'importe quelle fonction peut ou pas retourner un résultat. 
// Si elle retourne rien alors on indique void avant son nom


// Avant de partir, il faut prendre ses outils pour afficher un message à l'écran
#include <iostream>	// On doit inclure un bibliothèque qui contient plusieurs fonctions pour 
					// saisir de l'information au clavier(i : in : input : entrée) 
					// ou afficher des messages à l'écran (o: out : output : sortie)
					// Sur ces périphériques les données circulent => flux : stream 


void main()

// Toutes instruction doit être mises entre accolades qui délimitent un bloc d'instructions
// L'accolade ouvrante doit toujours être au dessus de l'accolade fermante
{			// Ouvre le bloc d'instructions

	// Pour que les messages s'affichent avec les bons caractères accentués
	setlocale(LC_ALL, "");


	// Ici on peut commencer le programme
	// On veut afficher un message à l'écran (output) c(channel)out(ouptput)

	std::cout << "Bienvenue à tous !";

	// Les messages doivent être écrits entre guillemets
	// Les becs de canard << indiquent la direction vers où les données sont envoyées
	// Chaque instruction en C++ doit se terminer par un point virgule ;

	// Avant de terminer le programme, on va faire une pause pour permettre à l'utilisateur 
	// de lire le message
	system("pause");



}			// Ferme le bloc d'instructions
