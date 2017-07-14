#include <stdlib.h>
#include <stdio.h>


//prototyping
int getMin(int *array, int *groesse);
int getMax(int *array, int *groesse);
float getAverage(int *array, int *groesse);

int main(int argc, char *argv[])
{
	int iLaenge;
	printf("Bitte Geben Sie ihre Wunschgroeﬂe ein:\t");
	scanf_s("%d", &iLaenge);
	
	// Speicher reservieren
	int *pArray = calloc(iLaenge, sizeof(int));

	int i;
	for (i = 0; i < iLaenge; i++)
	{
		printf("\nBitte Wert %i von %i eingeben:\t", i+1, iLaenge);
		scanf_s("%i", (pArray + i));
	}

	printf("Minimum:\t%d\n", getMin(pArray, &iLaenge));
	printf("Maximum:\t%d\n", getMax(pArray, &iLaenge));
	printf("Durchschnitt:\t%f\n", getAverage(pArray, &iLaenge));
	system("PAUSE");

}

int getMin(int *array, int *groesse)
{
	int iMin = *array;
	int i;
	for (i = 0; i < *groesse; i++)
	{
		if (iMin > *(array + i)) iMin = *(array + i);
	}
	return iMin;
}

int getMax(int *array, int *groesse)
{
	int iMax = *array;
	int i;
	for (i = 0; i < *groesse; i++)
	{
		if (iMax < *(array + i)) iMax = *(array + i);
	}
	return iMax;
}

float getAverage(int *array, int *groesse)
{
	float fAverage = 0;
	int i;
	for (i = 0; i < *groesse; i++)
	{
		fAverage += *(array + i);
	}
	return fAverage / *groesse;
}