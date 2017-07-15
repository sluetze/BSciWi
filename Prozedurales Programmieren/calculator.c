#include <stdio.h>
#include <math.h>

//Prototyping
double number_sum(float number1, float number2);
double number_div(float number1, float number2);
float number_read();

int main(int argc, char *argv[])
{
	float fZahl1, fZahl2;
	double dErgebnis;
	int iFunktion = 0;
	printf("Taschenrechner:\n\n");
	fZahl1 = number_read();
	fZahl2 = number_read();

	// Funktionswahl
	printf("Bitte geben Sie die gewuenschte Funktion an\n");
	printf("1\t fuer Addition (Zahl1 + Zahl2)\n");
	printf("2\t fuer Subtraktion (Zahl1 - Zahl2)\n");
	printf("3\t fuer Multiplikation (Zahl1 * Zahl2)\n");
	printf("4\t fuer Division (Zahl1 / Zahl2)\n");
	fflush(stdin);
	scanf_s("%i", &iFunktion);
	switch (iFunktion)
	{
	case 1:	dErgebnis = number_sum(fZahl1, fZahl2);
		break;
	case 2: dErgebnis = fZahl1 - fZahl2;
		break;
	case 3: dErgebnis = fZahl1 * fZahl2;
		break;
	case 4: dErgebnis = number_div(fZahl1, fZahl2);
		break;
	default:
		printf("Invalid Value\n\n");
	}

	printf("\n\n das Ergebnis ist: %.2lf", dErgebnis);
	system("PAUSE");
	return 0;
}

float number_read()
{
	float fInput;
	printf("please insert a number (nn[.nnn])");
	scanf_s("%f", &fInput);

	return fInput; // hier arbeite ich mit stack!
}

double number_sum(float number1, float number2)
{
		//this is just useless. i could do this in main
		return number1 + number2;
}

double number_div(float number1, float number2)
{
	double dErg = 0;
	if (number2 != 0)
	{
		dErg = number1 / number2;
	}
	else
	{
		printf("\n\nDiv/0 ist nicht erlaubt du geistiger Tiefflieger!\n\n");
	}
	return dErg;
}