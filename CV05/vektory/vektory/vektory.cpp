// vektory.cpp : Defines the entry point for the application.
//

#include "vektory.h"

using namespace std;

void soucet(double a[3], double b[3], double c[3])
{
	for (int i = 0; i < 3; i++)
		c[i] = a[i] + b[i];
}

double velikost(double a[3])
{
	return sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
}
double skalar(double a[3], double b[3])
{
	return (a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}
double vektorSoucin(double a[3], double b[3])
{
	printf("%lf, %lf, %lf",(a[1] * b[2] - a[2] * b[1]), (a[2] * b[0] - a[0] * b[2]), (a[0] * b[1] - a[1] * b[0]));
	return 1;
}

int main()
{
	double a[3];
	double b[3];
	double c[3];

	printf("Zadejte vektor A:\n");
	scanf("%lf,%lf,%lf", &a[0], &a[1], &a[2]);
	printf("Zadejte vektor B:\n");
	scanf("%lf,%lf,%lf", &b[0], &b[1], &b[2]);
	
	soucet(a, b, c);
	double velA = velikost(a);
	double skal = skalar(a, b);
	printf("Vektro 3D soucin:");
	vektorSoucin(a, b);

	printf("\nsoucet: %lf,%lf,%lf\n", c[0], c[1], c[2]);
	printf("velikost A: %lf\n", velA);
	printf("Skalarni soucin AB: %lf\n", skal);










	return 0;
}
