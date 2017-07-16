#include <stdio.h>

void einlesen(int* z1, int* z2); // Funktionsdeklaration

int main(int argc, char *argv[])
{
	int zahl1;
	int zahl2;
	einlesen(&zahl1, &zahl2); // Funktionsaufruf

	printf("Zahl 1 %i\n", zahl1);
	printf("Zahl 2 %i\n", zahl2);
	system("PAUSE");
}

void einlesen(int* z1, int* z2)
{
	printf("\nBitte erste Zahl : ");
	scanf_s("%i", &(* z1));
	printf("\nBitte zweite Zahl : ");
	scanf_s("%i", z2);
}