// string.cpp : Defines the entry point for the application.
//

#include "string.h"
#include "ctype.h"


using namespace std;

int pismena( char *text)
{
	int pocet = 0;
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (isalpha(char(text[i])))
		{pocet++;}
	}
	return pocet;
}

int cisla( char* text)
{
	int cis = 0;
	for (int j = 0; text[j] != '\0'; j++)
	{
		if (isdigit(char(text[j])))
		{
			cis++;
		}
	}
	return cis;
}

int slova(char *text)
{
	int slov = 0;
	int slovo = 0;
	while (*text != '\0')
	{
		if (isalpha((char)*text))
		{
			if (slovo==0)
			{
				slov++;
				slovo = 1;
			}
		}
		else
		{
			slovo = 0;
		}
		text++;
	}
		
	
	/*for (int j = 0; text[j] != '\0'; j++)
	{
		/*if (text[j] == ' ')
		{
			slov++;
		}
		if (isalpha(char(text[j])))
		{
			if(!slov)
			{
				slov++;
				cislo = 1;
			}
			else
			{
				cislo = 0;
			}
		}

	}*/
	return slov;
}

int slova2(char* text2)
{
	int slov2 = 0;
	int slovo = 0;
	while (*text2 != '\0')
	{
		if (isalpha((char)*text2))
		{
			if (slovo==0)
			{
				slov2++;
				slovo = 1;
			}
		}
		else
		{
			slovo = 0;
		}
		text2++;
	}
	return slov2;
}

int main()
{
	int delka = 0;
	char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";
	char text2[] = "Toto je extremne dlha veta. 'Ale ze totalne...', povedal Jozo.";
	
	for (int k = 0; text[k] != '\0'; k++)
	{
		printf("%c", text[k]);
	}
	printf("\n");
	for (int k = 0; text2[k] != '\0'; k++)
	{
		printf("%c", text2[k]);
	}
	printf("\n");

	int pocet=pismena(text);
	int cis=cisla(text);
	int slov = slova(text);
	int slov2 = slova(text2);

	printf("pocet pismen: %d\n", pocet);
	printf("pocet cisel: %d\n", cis);
	printf("pocet slov: %d\n", slov);
	printf("pocet slov2: %d\n", slov2);
	return 0;
}
