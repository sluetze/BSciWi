#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Prototyping
double number_sum(float number1, float number2);
double number_div(float number1, float number2);
void number_allmulti(float number1, float number2);
double number_heron(float number1);
long double number_fakultaet_rekursiv(unsigned int number1);
long double number_fakultaet_iterativ(unsigned int number1);
float number_read();

int main(int argc, char *argv[])
{
	float fZahl1, fZahl2;
	double dErgebnis;
	int iFunktion = 0;
	printf("Taschenrechner:\n\n");
	fZahl1 = number_read();
	fZahl2 = number_read();

	// Ausgabe Fakultät
	printf("Iterativ\n");
	for (int i = 0; i <= 20; i++)
	{
		printf("%i\t%lf\n", i, number_fakultaet_iterativ(i));
	}
	printf("\n\nRekursiv\n");
	for (int i = 0; i <= 20; i++)
	{
		printf("%i\t%lf\n", i, number_fakultaet_rekursiv(i));
	}
	// Funktionswahl
	do {
		printf("Bitte geben Sie die gewuenschte Funktion an\n");
		printf("1\t Aenderung Zahl1\n");
		printf("2\t Aenderung Zahl2\n");
		printf("3\t fuer Addition (Zahl1 + Zahl2)\n");
		printf("4\t fuer Subtraktion (Zahl1 - Zahl2)\n");
		printf("5\t fuer Multiplikation (Zahl1 * Zahl2)\n");
		printf("6\t fuer Division (Zahl1 / Zahl2)\n");
		printf("7\t fuer Ausgabe aller möglichen Multiplikationen von 1...Zahl1 * 1...Zahl2\n");
		printf("8\t Quadratwurzel für Zahl1 nach Heron-Verfahren\n");
		printf("9\t Ende\n\n");
		fflush(stdin);
		scanf_s("%i", &iFunktion);
		switch (iFunktion)
		{
		case 1: fZahl1 = number_read();
			break;
		case 2: fZahl2 = number_read();
			break;
		case 3:	dErgebnis = number_sum(fZahl1, fZahl2);
			printf("\n\n das Ergebnis ist: %.2lf", dErgebnis);
			break;
		case 4: dErgebnis = fZahl1 - fZahl2;
			printf("\n\n das Ergebnis ist: %.2lf", dErgebnis);
			break;
		case 5: dErgebnis = fZahl1 * fZahl2;
			printf("\n\n das Ergebnis ist: %.2lf", dErgebnis);
			break;
		case 6: dErgebnis = number_div(fZahl1, fZahl2);
			printf("\n\n das Ergebnis ist: %.2lf", dErgebnis);
			break;
		case 7: number_allmulti(fZahl1, fZahl2);
			break;
		case 8: dErgebnis = number_heron(fZahl1);
			printf("\n\n das Ergebnis ist: %.2lf", dErgebnis);
			break;
		case 9: return 0;
			break;
		default:
			printf("Invalid Value\n\n");
		}
	} while (iFunktion != 9);

	system("PAUSE");

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

void number_allmulti(float number1, float number2)
{
	int i;
	for (i = 1; i <= number1; i++)
	{
		int j;
		for (j = 1; j <= number2; j++)
		{
			printf("Multiplikation von \t%i und \t%i ergibt \t%i\n", i, j, i*j);
		}
	}
}

double number_heron(float number1)
{
	//Die Wurzel einer Zahl a kann gemäß folgender Iterationsvorschrift
	//berechnet werden : xn + 1 = (xn + a / xn) / 2, für beliebige xn<>0.
	//Aus der Iterationsvorschrift wird xn + 1berechnet und wieder in die
	//Formel eingesetzt.xn + 1 konvergiert gegen die Wurzel aus a.
	//Das Abbruchkriterium ist xn + 1 = xn.
	double xn1 = number1;
	double xn;
	float a = number1;
	do {
		xn = xn1;
		xn1 = (xn + a / xn) / 2;
	} while (xn1 != xn);
	return xn;
}

long double number_fakultaet_iterativ(unsigned int number1)
{
	if (number1 > 0)
	{
		int i;
		long double result = 1; // 1 weil ich Null weg lasse und Fakultaet von 0 ist 1
		for (i = 1; i <= number1; i++)
		{
			result *= i;
		}
		return result;
	}
	return 1;
}

long double number_fakultaet_rekursiv(unsigned int number1)
{
	if (number1 == 0)
	{
		return 1;
	}
	else
	{
		return number_fakultaet_rekursiv(number1 - 1) * number1;
	}

}