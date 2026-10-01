// Manhattan.cpp : Defines the entry point for the application.
//

#include "Manhattan.h"

using namespace std;

int main()
{
	int x1;
	int x2;
	int y1;
	int y2;
	printf("Zadej X souradnice:\n");
	scanf("%d""%d", &x1,&x2);
	//scanf("%d", &x2);
	printf("Zadej Y souradnice:\n");
	scanf("%d""%d", &y1,&y2);
	//scanf("%d", &y2);
	printf("Vase zadane souradnice X [%d,%d]:\n",x1,x2);
	printf("Vase zadane souradnice Y [%d,%d]:\n\n",y1,y2);

	int X = abs(x1 - x2);
	int Y = abs(y1 - y2);
	printf("soucet: %d\n", X+Y);




	return 0;
}
