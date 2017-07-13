#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

//prototyping

void printArray(int *array, int *groesse);
void move(int *array, int *posX, char *zug, int *groesse);

int main(int argc, char * argv[])
{
	int iLaenge;
	char cInput;


	//größe des Weges einlesen
	printf("Bitte geben Sie die Laenge dess Weges ein:\t");
	scanf_s("%d", &iLaenge);

	int * pArray = (int *)calloc(iLaenge, sizeof(int)); 	//pArray durchnullen muss wg. calloc nicht gemacht werden
	int iPosition = 0;
	//int * iPosition = pArray; //iPosition zeigt am anfang auf die erste Adresse im Array.


	//ersten Wert auf 1 setzen
	*(pArray + iPosition) = 1;

	// initiale Ausgabe
		printArray(pArray, &iLaenge);
	do
	{
		printf("\nLege den naechsten Schritt fest.\t");
		scanf_s(" %c", &cInput);
		if (cInput == 'l' || cInput == 'r')
		{
			system("cls");
			move(pArray, &iPosition, &cInput, &iLaenge);
			printArray(pArray, &iLaenge);
		}
	} while (cInput != 'x');
	free(pArray);
}

void printArray(int *array, int *groesse)
{
	int i;
	for (i = 0; i < *groesse; i++)
	{
		printf("%i ", *(array + i));
	}
	printf("\n");
}

void move(int *array, int *posX, char *zug, int *groesse)
{
	//array ist mein Feld
	// posX ist die AKTUELLE Position am Anfang und die neue Position am ende
	// zug übergibt mir die richtung (r, l)
	// array ist der Anfang
	// array + *groesse (array + der wert von Groesse per Pointerarithmetik) ist das ende
	if (*zug == 'r' && *posX < (*groesse -1))
	{
		*(array + *posX) = 0; //AKtuelle Position wird auf Null gesetzt
		*posX += 1; // Position wird eins verschoben
		*(array + *posX) = 1; // Neue Position wird gesetzt
	}
	else if ( *zug == 'r')
	{
		printf("Noch mehr rechts ist Nazi!\n\n");
		*(array + *posX) = 0; //AKtuelle Position wird auf Null gesetzt
		*posX = 0; // Position wird auf minimum verschoben
		*(array + *posX) = 1; // Neue Position wird gesetzt
	}

	if (*zug == 'l' && *posX > 0)
	{
		*(array + *posX) = 0; //AKtuelle Position wird auf Null gesetzt
		*posX -= 1; // Position wird eins verschoben
		*(array + *posX) = 1; // Neue Position wird gesetzt
	}
	else if ( *zug == 'l')
	{
		printf("Wow, wow, wow, jetzt nicht zum autonomen Steinewerfer werden!\n\n");
		*(array + *posX) = 0; //AKtuelle Position wird auf Null gesetzt
		*posX = *groesse -1; // Position wird auf maxwert verschoben
		*(array + *posX) = 1; // Neue Position wird gesetzt
	}	
}