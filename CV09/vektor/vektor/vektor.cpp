// vektor.cpp : Defines the entry point for the application.
//

#include "vektor.h"
#include "stdio.h"
#include "math.h"
#include "VectorMath.h"
//#include "VectorMath.cpp"

using namespace std;

int main()
{
	struct vector3d u, v, w;
	int vyber;

	printf("Zadejte 3D vektor u:\n");
	scanf("%lf, %lf, %lf", &u.x, &u.y, &u.z);
	printf("Zadejte 3D vektor v:\n");
	scanf("%lf, %lf, %lf", &v.x,&v.y,&v.z);
	for (;;)
	{
		printf("Zadejte operaci:\n1)SOUCET\n2)VEKTOR SOUCIN\n3)SKALARNI SOUCIN\n");
		scanf("%d", &vyber);
		if (vyber == 1 or vyber == 2 or vyber == 3)
		{break;}
	}

	w = operace(u, v, (enum typOperace) vyber);
	tisk(w);
	
	int cmp = porovnat(u, v);
	printf("Porovnani: %d\n", cmp);

	return 0;
}
