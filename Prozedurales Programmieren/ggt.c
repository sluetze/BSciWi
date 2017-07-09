#include <stdio.h>

int iGGT(int iZahl1, int iZahl2);
int iFibonacci(int iZahl1);

int main(int argc, char *argv[])
{
	int iZahl1, iZahl2;
	printf("Bitte Ganzzahlen eingeben!:\t");
	scanf_s("%d", &iZahl1);
	printf("\n\nBitte zweite Ganzzahl eingeben!:\t");
	scanf_s("%d", &iZahl2);

	printf("\n der GGT lautet: %d\n \n", iGGT(iZahl1, iZahl2));
	printf("\n Die Fibonaccifolge zu Zahl1 lautet:\n");
	for (int i = 0; i <= iZahl1; i++)
	{
		printf(", %i", iFibonacci(i));
	}
	printf("\n\n");

	system("PAUSE");
}

int iGGT(int iZahl1, int iZahl2)
{
	if (iZahl1 == iZahl2) return iZahl1;
	if (iZahl1 >= iZahl2) return iGGT(iZahl1 - iZahl2, iZahl2);
	if (iZahl1 <= iZahl2) return iGGT(iZahl1, iZahl2 - iZahl1);
}

int iFibonacci(int iZahl1)
{
	if (iZahl1 == 0) return 0;
	if (iZahl1 == 1) return 1;
	return iFibonacci(iZahl1 - 1) + iFibonacci(iZahl1 - 2);
}