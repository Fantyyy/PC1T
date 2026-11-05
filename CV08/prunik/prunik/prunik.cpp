// prunik.cpp : Defines the entry point for the application.
//

#include "prunik.h"
#include "stdio.h"
#include "par.h"

using namespace std;

void test(double z1, double k1, double z2, double k2)
{
	double vyskon=0.0;
	double vyszac =0.0;
	int prun = prunik(z1, z2, k1, k2, &vyszac, &vyskon);
	printf("Test AB [%lf,%lf] a CD [%lf,%lf]:", z1, k1, z2, k2);
	if (prun)
	{
		printf("Prunik je [%lf,%lf]\n",vyszac,vyskon);
	}
	else
	{
		printf("Nema prunik\n");
	}
}

int main()
{
	test(1.5, 2.8, 1.6, 2.0);
	test(1.5, 2.8, 3.6, 7.5);
	test(1.5, 4.8, 2.6, 7.5);
	double zac1, zac2, kon1, kon2;
	double vyszac, vyskon;
	printf("Zadejte interval 1: [A,B]");
	scanf("%lf %lf", &zac1, &kon1);
	printf("Zadejte interval 2: [C,D]");
	scanf("%lf %lf", &zac2, &kon2);
	


	printf("[A,B]: [%lf,%lf]\n", zac1, kon1);
	printf("[C,D]: [%lf,%lf]\n", zac2, kon2);

	if (prunik(zac1, kon1, zac2, kon2, &vyszac, &vyskon))
	{
		printf("Prunik je [%lf,%lf]\n", vyszac, vyskon);
	}
	else
	{
		printf("Nema prunik\n");
	}

	return 0;
}
