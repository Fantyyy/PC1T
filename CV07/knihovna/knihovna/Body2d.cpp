#include "knihovna.h"
#include "math.h"
#include "stdio.h"

static double vzdalenostBodu(double x1, double y1, double x2,double y2)
{ 
	double dx = (double)(x1 - x2);
	double dy = (double)(y1 - y2);
	return sqrt(dx * dx + dy * dy);
}

int indexNejblizsi(int velikost, int (*poleBodu)[2], int referencniX, int referencniY)
{
	if (velikost <=0 or poleBodu == NULL)
	{
		return - 1;
	}
	int idx = 0;
	double min = vzdalenostBodu(poleBodu[0][0], poleBodu[0][1], referencniX, referencniY);

	for (int i = 1; i < velikost; i++)
		{
		double d = vzdalenostBodu(poleBodu[i][0], poleBodu[i][1],referencniX,referencniY);
			if (d < min)
			{
				min = d;
				idx = i;
			}
		}
	return idx;
}

double prumernaVzdalenost(int velikost, int (*poleBodu)[2], int referencniX, int referencniY)
{
	if (velikost <= 0 or poleBodu == NULL)
	{
		return 0.0;
	}
	double soucet = 0.0;

	for (int i = 0; i < velikost; i++)
	{
		soucet += vzdalenostBodu(poleBodu[i][0], poleBodu[i][1], referencniX, referencniY);
	}
	return soucet / velikost;
}

void vetsinez(int velikost, int (*poleBodu)[2], int referencniX, int referencniY, double minHranice)
{
	if (velikost <= 0 or poleBodu == NULL)
	{
		return;
	}
	printf("Body ve vzdalenosti vetsi nez %lf :\n", minHranice);
		for (int i = 0; i < velikost; i++)
		{
			double d = vzdalenostBodu(poleBodu[i][0], poleBodu[i][1], referencniX, referencniY);
			if (d > minHranice)
			{
				printf("[%d, %d] (vzdálenost %.2f)\n", poleBodu[i][0], poleBodu[i][1], d);
			}
		}
}