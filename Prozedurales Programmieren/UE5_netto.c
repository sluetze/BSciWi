#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	/*
	int iNetto = 0;
	printf("Bitte geben Sei einen ganzzahligen Nettopreis ein:\t");
	scanf_s("%i", &iNetto);
	int i = iNetto;
	for (i = iNetto; i <= (iNetto + 10); i++)
	{
		float fErg = i * 1.19;
		printf("\nBrutto\t%f\n", fErg);
	}
	*/
	printf("\n---- Berechnung der Fakultaet ----\n");

	for (int i = 1; i <= 9; i++)
	{
		int result = 1;
		for (int j = 1; j <= i; j++)
		{
			result *= j;
		}
		printf("%i\t%i\n", i, result);
	}

	/*printf("\n---- Nettopreise UE7 ----\n");
	//Erstellen Sie ein Programm, das Nettopreise einliest und die zugehörigen
	//Bruttopreise ausgibt. Lesen Sie hierzu einen Nettopreis, einen frei wählbaren
	//Preisabstand und die Anzahl der gewünschten Werte ein. Geben Sie hierfür alle
	//Bruttopreise aus.

	int iNetto = 0;
	int iAbstand = 0;
	int iAnzahl = 0;
	//Einlesen Nettopreis
	printf("Bitte geben Sie einen Nettopreis ein:\t");
	scanf_s("%i", &iNetto);
	//Einlesen Preisabstand
	printf("\nBitte geben Sie einen Preisabstand an:\t");
	scanf_s("%i", &iAbstand);
	//Einlesen Anzahl der gewünschten Werte
	printf("\nBitte geben Sie die Anzahl der Werte an:\t");
	scanf_s("%i", &iAnzahl);

	int count = 1;
	float fBrutto = 0;
	do {
		fBrutto = iNetto * 1.19;
		printf("Bruttopreis von Netto %i lautet \t%f\n\n", iNetto, fBrutto);
		iNetto += iAbstand;
	} while (++count <= iAnzahl);
	*/

	printf("\n ---- Quersumme ---- \n");
	int iInput = 0;
	int iQuer = 0;
	do
	{
		printf("\nBitte geben Sie Ziffern ein zum ermitteln der Quersumme. 0 zum Abbruch:\t");
		scanf_s("%i", &iInput);
		iQuer += iInput; //Rechnet auch die Null ein, dies hat aber keinen Mathematischen Effekt.
	} while (iInput != 0);

	printf("\n\n\tDie Quersumme lautet:%i", iQuer);


	system("PAUSE");
}