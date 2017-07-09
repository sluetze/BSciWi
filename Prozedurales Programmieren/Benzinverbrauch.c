#include <stdio.h>

int main(int argc, char *argv[])
{
	float fVerbrauch, fKilometer;
	printf("Bitte Verbrauch eingeben: \t");
	scanf_s("%f", &fVerbrauch);
	printf("\nBitte gefahrene Kilometer eingeben: \t");
	scanf_s("%f", &fKilometer);

	printf("Der Verbrauch betrug: %.2f", fVerbrauch * 100 / fKilometer);

	return 0;
}