// prestupny rok.cpp : Defines the entry point for the application.
//

#include "prestupny rok.h"

using namespace std;

int jeStastny(int cina)
{
	if (cina % 8 == 0)
	{
		return 1;
	}
	return 0;
}

int jePrestupny(int rok)
{
	if (rok % 4==0 && rok % 100!=0 || rok % 400==0)
	{
		return 1;
	}
	return 0;
	/*if (rok % 4 == 0)
	{
		if (rok % 100 != 0)
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}*/
}

int main()
{
	printf("%d %d Stastny? %d\n", 1000, jePrestupny(1000), jeStastny(1000));
	printf("%d %d Stastny? %d\n", 1003, jePrestupny(1003), jeStastny(1003));
	printf("%d %d Stastny? %d\n", 1235, jePrestupny(1235), jeStastny(1235));
	printf("%d %d Stastny? %d\n", 1638, jePrestupny(1638), jeStastny(1638));
	printf("%d %d Stastny? %d\n", 2000, jePrestupny(2000), jeStastny(2000));
	printf("%d %d Stastny? %d\n", 2002, jePrestupny(2002), jeStastny(2002));
	printf("%d %d Stastny? %d\n", 2012, jePrestupny(2012), jeStastny(2012));
	printf("%d %d Stastny? %d\n", 2022, jePrestupny(2022), jeStastny(2022));
	printf("%d %d Stastny? %d\n", 2200, jePrestupny(2200), jeStastny(2200));
		return 0;
}
