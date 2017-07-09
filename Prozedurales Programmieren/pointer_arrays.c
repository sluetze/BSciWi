#include <stdio.h>

/* 06.07
int main()
{
	int iArray[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	float fArray[10] = { 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9 };

	int *iPos = iArray;
	float *fPos = fArray;


	for (int i = 0; i < 10; i++)
	{
		printf("iArray: %i\n", *(iPos + i));
		printf("fArray: %f\n\n", *(fPos + i));
	}

	system("PAUSE");
}
*/

/* 06.08 
int berechneProdukt(int feld[], int laenge);

int main()
{
	int iArray[10];
	int iLaenge = 10;
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("Bitte zahl %d/10 eingeben:\t", i + 1);
		scanf_s("%d", &iArray[i]);
		fflush(stdin);
	}

	printf("Das Produkt lautet:%i", berechneProdukt(iArray, iLaenge));

	system("PAUSE");
}

int berechneProdukt(int feld[], int laenge)
{
	int produkt = 1;
	for (int i = 0; i < laenge; i++)
	{
		produkt *= *feld++;
	}
	
	return produkt;
}
*/

/* 06.08b */
int main()
{
	int iArray[11];
	int iLaenge = 10;
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("Bitte zahl %d/10 eingeben:\t", i + 1);
		scanf_s("%d", &iArray[i]);
		fflush(stdin);
		if (iArray[i] == 0) i--;
	}
	iArray[10] = 0;

	printf("Das Produkt lautet:%i", berechneProdukt(iArray));

	system("PAUSE");
}

int berechneProdukt(int feld[])
{
	int produkt = 1;
	while(*feld != 0)
	{
		printf("%i\n", *feld);
		produkt *= *feld++;
	}

	return produkt;
}
