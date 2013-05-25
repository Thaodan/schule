/*
	Bjoern Bidar
	ITA-E1
	20.09.2012
*/



#include <iostream>
#include <math.h> // damit wir pi haben M_PI = pi
using namespace std;

int main() 
{

	float umfang, durchmesser,  area, radius;
	
	cout << "Bitte den Durchmesser des Kreises eingeben.\n";
	cin 	>> durchmesser;

	radius	= durchmesser / 2;
	umfang 	=	2 * M_PI * radius; 
	area		= M_PI * radius * 2;
	
	cout << "Der Fläche betr\228g" << area << endl;
	cout << "Der Umfang betr\228gt" << umfang << endl;
	
	return 0;
}