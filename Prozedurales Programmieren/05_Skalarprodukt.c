#include <stdio.h>
#include <memory.h>
#define n 3

int main(int argc, char *argv[]){
	
	double dVariable1[n];
	double dVariable2[n];
	double dSum = 0;
	double *vn

	printf("Bitte geben Sie die Anzahl an Spaﬂ ein:\n");
	scanf_s("%i", &vn);

	for (int i = 0; i < n; i++)	{
		printf("Bitte geben sie den %i-ten Wert f¸r den ersten Vektor ein.\n", i);
		scanf_s("%lf", &dVariable1[i]);
		printf("Bitte geben sie den %i-ten Wert f¸r den zweiten Vektor ein.\n", i);
		scanf_s("%lf", &dVariable2[i]);
	}

	for (int i = 0; i < n; i++) {
		dSum += dVariable1[i] * dVariable2[i];
	}

	printf("Das Ergebnis mit normaler Rechnung lautet: %lf\n", dSum);

	/* Nachfolgend die Anteile f¸r Pointerberechnung*/
	double *pdVariable1 = dVariable1;
	double *pdVariable2 = dVariable2;
	double *pdSum = &dSum;

	dSum = 0;

	for (int i = 0; i < n; i++) {
	//	pdSum += pdVariable1[];
	}

	printf("\n\n Das Ergebnis via Pointerberechnung lautet: %lf\n", &pdSum);
	getchar();
}