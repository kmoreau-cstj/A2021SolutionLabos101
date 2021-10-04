#include "Devoir04.h"
#include <iostream>

using namespace std;

bool ValiderDate(int j, int m, int a)
{
	if ((m == 1 || m == 3 || m == 5 || m== 7 || m== 8 || m==10 || m==12) && (j >= 1 && j <= 31))
	{
		return true;
	}
	else if ((m == 4 || m==6 || m==9 || m==11) && (j >= 1 && j <= 30))
	{
		return true;
	}
	else
	{
		if (etreBissextile(a))
		{
			if (j >= 1 && j <= 29)
			{
				return true;
			}
		}
		else
		{
			if (j >= 1 && j <= 28)
			{
				return true;
			}
		}
	}
   return false;
}

bool etreBissextile(int a)
{
	//if ((a%4 == 0 && !(a%100 == 0)) || a%400 == 0)
	//{
		return ((a % 4 == 0 && !(a % 100 == 0)) || a % 400 == 0);
	//}
	//return false;
}








void DessinerLaForme(int h, int l, bool r)
{
	for (int compteurLigne = 0; compteurLigne < h; compteurLigne++)
	{
		for (int compteurMotif  = 0; compteurMotif < l; compteurMotif++)
		{
			// On dessine le contour de la forme avec un #
			
			if (compteurLigne == 0 || compteurLigne == h-1 || compteurMotif == 0 || compteurMotif == l -1)
			{
				cout << "#";
			}
			else
			{
				if (r)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
	

			// On dessine l'intérieur de la forme avec une * OU un espace
		}
		cout << endl;
	}


}
