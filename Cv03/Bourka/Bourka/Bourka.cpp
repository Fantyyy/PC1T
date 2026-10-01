// Bourka.cpp : Defines the entry point for the application.
//

#include "Bourka.h"

using namespace std;

int main()
{
	double cas;
	double delka;
	const double rychlost = 340.;

	printf("Zadej cas v sekundach od uderu Blesku:\n");
	scanf("%lf", &cas);

	delka = cas * rychlost;

	printf("Vzdalenost: %lf km", delka);





	return 0;
}
