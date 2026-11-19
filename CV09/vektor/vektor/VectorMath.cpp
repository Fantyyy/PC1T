// vektor.cpp : Defines the entry point for the application.
////double eps = 1e-9;

#include "vektor.h"
#include "stdio.h"
#include "math.h"
#include "VectorMath.h"

double velikostVektoru(struct vector3d v)
{
	return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ)
{
	struct vector3d vysledek = { 0.0, 0.0, 0.0 };
	switch (typ)
	{
	case soucet:
		vysledek.x = u.x + v.x;
		vysledek.y = u.y + v.y;
		vysledek.z = u.z + v.z;
		break;

	case vektorovySoucin:
		vysledek.x = u.y * v.z - u.z * v.y;
		vysledek.y = u.z * v.x - u.x * v.z;
		vysledek.z = u.x * v.y - u.y * v.x;
		break;

	case skalarniSoucin:
		vysledek.x = u.x * v.x + u.y * v.y + u.z * v.z;
		break;

	default:
		printf("NEZNAMA OPERACE");
		break;
	}
	return vysledek;
	
}

void tisk(struct vector3d w)
{ 
	double velikost = sqrt(w.x * w.x + w.y * w.y + w.z * w.z);

	printf("w =(%.3f,%.3f,%.3f)\n", w.x, w.y, w.z);
	printf("|w|= %.3f\n", velikost);
}

int porovnat(struct vector3d u,struct vector3d v)
{
	double delkaU = velikostVektoru(u);
	double delkaV = velikostVektoru(v);

	if(delkaU>delkaV)
	{
		return 1;
	}
	else if(delkaU==delkaV)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

