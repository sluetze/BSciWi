#include <stdio.h>

/* 06.01 
int main(int argc, char *argv[])
{
	int i;
	const int MAX_SIZE = 10;
	float fArray[10];
	for (i = 0; i < MAX_SIZE; i++)
	{
		printf("Bitte die %i-te Note eingeben:\n", i+1);
		scanf_s("%f", &fArray[i]);
		fflush(stdin);
	}

	//Durchschnitt errechnen
	float fGesamt = 0;
	for (i = 0; i < MAX_SIZE; i++)
	{
		fGesamt += fArray[i];
	}

	printf("\nDer Durchschnitt betraegt: %.2f\n", fGesamt / MAX_SIZE);
		
	system("PAUSE");
}*/

int main(int argc, char *argv[])
{
	int iArray[100];
	long lArray[100];
	float fArray[100];
	double dArray[100];

	printf("Die Groesse eines int: %d\n", sizeof(int));
	printf("Die Groesse des Int-Arrays: %d\n\n", sizeof(iArray));

	printf("Die Groesse eines long: %d\n", sizeof(long));
	printf("Die Groesse des long-Arrays: %d\n\n", sizeof(lArray));

	printf("Die Groesse eines float: %d\n", sizeof(float));
	printf("Die Groesse des float-Arrays: %d\n\n", sizeof(fArray));

	printf("Die Groesse eines double: %d\n", sizeof(double));
	printf("Die Groesse des Double-Arrays: %d\n\n", sizeof(dArray));

	system("PAUSE");

}