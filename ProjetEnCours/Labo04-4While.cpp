// But : Le programme demande à l'utilisateur une note.
// Le programme doit redemander une note si elle n'est pas comprise entre 0 et 100.
// A la fin le programme affiche la bonne note.

// Auteur :  Karine Moreau
// Date : 2021-09-14

#include <iostream>

using namespace std;

void main()
{ 
   setlocale(LC_ALL, "");
  
   // Déclaration des constantes
   const double NOTE_MIN = 0;
   const double NOTE_MAX = 100;
   
   // Déclaration des variables
   double note;

   // On doit valider que la note est bien comprise entre min et le max
   // On doit tester le contraire, si la note n'est pas comprise entre min et le max, 
   // on doit redemander à l'utilisateur une nouvelle note

   // Pour initialiser la note, on la demande à l'utilisateur
   cout << "Veuillez entrer une note comprise entre " << NOTE_MIN << " et " << NOTE_MAX << " : ";
   cin >> note;


   while (note < NOTE_MIN || note > NOTE_MAX)
   {
      cout << " Erreur : la note n'est pas comprise entre " << NOTE_MIN << " et " << NOTE_MAX << endl;
      
      // On doit redemander la nouvelle note à l'utilisateur
      cout << "Veuillez entrer une note comprise entre " << NOTE_MIN << " et " << NOTE_MAX << " : ";
      cin >> note;
   }

   cout << " la note est de : " << note << endl;



   system("pause");

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




}