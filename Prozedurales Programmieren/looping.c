#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	for (i = 1; i <= 25; i++)
	{
		printf("%d\n", i);
	}

	for (i = 1; i <= 10; i++)
	{
		int j;
		for (int j = 0; j < 10; j++)
		{
			printf("*");
		}
		printf("\n");
	}


/*
	int iZahl;
	int ilowest = 0;
	int ihighest = 0;
	do
	{
		printf("\nBitte geben Sie eine Zahl ein (0 fuer Ende und Auswertung):\t");
		scanf_s("%d", &iZahl);
		if (ilowest == 0 && ihighest == 0)
		{
			ilowest = iZahl;
			ihighest = iZahl;
		}

		if (iZahl < ilowest && iZahl != 0) ilowest = iZahl;
		if (iZahl > ihighest) ihighest = iZahl;

	} while (iZahl != 0);
	printf("\n\nDie höchste Zahl lautet %d", ihighest);
	printf("\n\nDie niedrigste Zahl lautet %d", ilowest);
*/
	int iZahl;
	int iCount = 0;
	printf("Bitte geben Sie die Zahl ein, die durch 5 geteilt werden soll.\t");
	scanf_s("%d", &iZahl);

	while (iZahl >= 5)
	{
		iZahl -= 5;
		iCount++;
	}
	//int iResult = iCount / 5;
	printf("5 passt %i Mal in die übermittelte Zahl. Der Rest ist %i", iCount, iZahl);

	printf("Ende");
}