// knihovna.cpp : Defines the entry point for the application.
//

#include "knihovna.h"
#include "Body2d.h"
#include "math.h"
#define POCET_BODU 10
#define POCET_BODU2 13

using namespace std;

int main()
{
	int body[POCET_BODU][2] = { 5, 10,-14, 2, 45, 4, -9, 8, 58, -3, 47, 5, -18, -86, 75, 7,	-25, 51, 17, 98 };
	int body2[POCET_BODU2][2] = { 5, 10,59,-8, 130,-8, -7,9, -14, 2, 45, 4, -9, 8, 58, -3, 47, 5, -18, -86, 75, 7, -25, 51, 17, 98 };

	int referencniX, referencniY;
	double hranice;
	printf("Zadejte souradnici X,Y:");
	scanf("%d %d", &referencniX,&referencniY);

	printf("Zadejte min pozadovanou hranici:");
	scanf("%lf", &hranice);
	
	int index = indexNejblizsi(POCET_BODU, body, referencniX, referencniY);
	double prumer = prumernaVzdalenost(POCET_BODU, body, referencniX, referencniY);

	if (index != -1)
	{
		printf("Nejblizsi bod: 3 [%d,%d]\n", body[index][0], body[index][1]);
	}
	printf("Prumer vzdalenost: %lf\n", prumer);

	printf("POLE2:");
	int idx2 = indexNejblizsi(POCET_BODU2, body2, referencniX, referencniY);
	double prumer2=prumernaVzdalenost(POCET_BODU2, body2, referencniX, referencniY);
	if (idx2 != -1)
	{
		printf("nejblizsi bod: 6 [%d,%d]\n", body2[idx2][0], body2[idx2][1]);
	}
	printf("Prumer vzdalenost: %lf\n", prumer2);
	printf("\n");
	vetsinez(POCET_BODU2, body2, referencniX, referencniY, hranice);

	return 0;
}
