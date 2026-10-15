// vektor.cpp : Defines the entry point for the application.
//

#include "vektor.h"

using namespace std;

void soucet(double a[3], double b[3], double c[3])
{
	printf("soucet A+B:");
	for (int i = 0; i < 3; i++)
	{
		c[i] = a[i] + b[i];
	}

}
double velikost(double a[3])
{
	return sqrt(a[0]*a[0]+ a[1] * a[1]+ a[1] * a[1])
}
double skalarniSoucin(double a[3], double b[3])
{

}

int main()
{
	double a[3];
	double b[3];
	double c[3];

	printf("Zadejte vektor A:");
		for (int i = 0; i < 3; i++)
		{
			printf("zadej %d cislo", i);
			scanf("%lf", a[i]);
		}

		soucet(double a[3], double b[3], double c[3])





	return 0;
}
