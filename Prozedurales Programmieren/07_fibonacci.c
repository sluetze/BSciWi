#include <stdio.h>
#include <stdlib.h>

// Prototypdeklaration
int recurse_fibonacci(int iFolge);
void iterative_fibonacci(int iAnzahl);
int input();

int main(int argc, char *argv[])
{
	//Zwei unterprogramme + Eingabe
	// keine globalen Variablen
	// Keine Unterprogramme vor main

	//printf("Ausgabetest: Input war: %i", input());
	int iInput = input();

	printf("\n\n Nachfolgend die iterative Ausfuehrung:\n");
	iterative_fibonacci(iInput);

	printf("\n\n Nachfolgend die rekursive Ausfuehrung:\n");
	
	int i;
	for (i = 0; i <= iInput; i++)
	{
		printf(", %i", recurse_fibonacci(i));
	}
}

int input() {

	char sInput[120];
	char cTest = 'c';

	printf("Bitte geben sie das obere Limit f. Fibonacci ein:\n");
	scanf("%119s", sInput, 120);

	int iAnzahl = atoi(sInput);

	return iAnzahl;
}

void iterative_fibonacci(int iRuns) {
	// f(0) = 0
	// f(1) = 1
	// f(n) = f(n-1) + f(n-2)

	int iLower = 0;
	int iUpper = 1;
	int iResult;

	if (iRuns == 0) printf("0\n");
	else if (iRuns == 1) printf("0, 1\n");
	else
	{
		printf("%i, %i", iLower, iUpper);
		int i;
		for (i = 2; i <= iRuns; i++) //die ersten beiden ELemente werden direkt im Printf oben drüber ausgegeben
			{
			iResult = iLower + iUpper;
				printf(", %i", iResult);
				iLower = iUpper;
				iUpper = iResult;
			}
	}
	
}

int recurse_fibonacci(int iFolge)
{
	if (iFolge == 0) return 0;
	if (iFolge == 1) return 1;
	return recurse_fibonacci(iFolge - 1) + recurse_fibonacci(iFolge - 2);

}
