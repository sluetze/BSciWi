#include <stdio.h>
int main() {
	int paare[][2] = { { 1,2 },{ 3,4 },{ 5,6 },{ 7,8 },{ 9,10 } };
	
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("paar 1: %d\n", paare[i][0]);
		printf("paar 2: %d\n", paare[i][1]);
		printf("Produkt: %d\n\n", paare[i][0] * paare[i][1]);
	}
	
	system("PAUSE");
	return 0;
}