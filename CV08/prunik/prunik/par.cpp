// prunik.cpp : Defines the entry point for the application.
//
//*vyskon = (kon1 < kon2) ? kon1 : kon2;
#include "prunik.h"

using namespace std;

int prunik(double zac1, double kon1, double zac2, double kon2, double* vyszac, double* vyskon)
{
	if (zac1 > zac2)
	{
		double mezi = zac2;
		double mezi2 = zac1;
		zac1 = mezi;
		zac2 = mezi2;
	}
	if (kon1 > kon2)
	{
		double mez = kon2;
		double mez2 = kon1;
		kon1 = mez;
		kon2 = mez2;
	}

	if (zac2 < kon1)
	{
		if (vyszac != 0)
		{
			*vyszac = zac2;
		}
		if (vyskon != 0)
		{
			*vyskon = (kon1 < kon2) ? kon1 : kon2;
		}
		return 1;
	}
	return 0;
}
