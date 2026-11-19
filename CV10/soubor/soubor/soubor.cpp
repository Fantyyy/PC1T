// soubor.cpp : Defines the entry point for the application.
//

#include "soubor.h"
#include "stdio.h"
#include "ctype.h"

using namespace std;

int main()
{
	//FILE* vstup = fopen("D:\\vstup.txt", "r");
	FILE* vstup = fopen("..\\..\\vstup.txt", "r");
	if (vstup == NULL)
	{
		printf("nelze nacist soubor!");
		return 1;
	}

	int pismo = 0;
	int cislo = 0;
	int veta = 0;
	int slova = 0;
	int znak;
	int ve_slove = 0;

	while ((znak = fgetc(vstup)) != EOF)
	{
		if (isalpha((unsigned char)znak))
		{
			pismo++;
			if (!ve_slove)
			{
				slova++;
				ve_slove = 1;
			}
		}
		else if(isdigit((unsigned char)znak))
		{
			cislo++;
			/*if (!ve_slove)
			{
				slova++;
				ve_slove = 1;
			}*/
			ve_slove = 0;
		}
		else
		{
			ve_slove = 0;
			if (znak == '.')
			{
				veta++;
			}
		}
	}

	fclose(vstup);
	printf("pocet pismen: %d\n", pismo);
	printf("pocet cisel: %d\n", cislo);
	printf("pocet slov: %d\n", slova);
	printf("pocet vet: %d\n", veta);

	//FILE* vystup = fopen("D:\\vysledky.txt", "w");
	FILE* vystup = fopen("..\\..\\vysledky.txt", "w");
	if (vystup == NULL)
	{
		printf("Nelze vytvorit soubor!");
		return 1;
	}

	fprintf(vystup, "Pocet pismen: %d\n", pismo);
	fprintf(vystup, "Pocet cisel: %d\n", cislo);
	fprintf(vystup, "Pocet slov: %d\n", slova);
	fprintf(vystup, "Pocet vet: %d\n", veta);

	fclose(vystup);

	return 0;
}
