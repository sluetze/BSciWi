/* das erste C-Program */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void main(int arc, char *argv[])
{
	char name[20];
	printf("Hallo Welt\n");
	printf("\nGeben Sie bitte ihren Vornamen ein:\t");
	scanf("%s", name);
	printf("\nHallo du %s\n", name);
	//fflush(stdin);
	system("PAUSE");
}