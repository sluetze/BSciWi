#include <stdio.h>

int main(int argc, char * argv[])
{
	int iArray[] = { 1, 7, 22, 5, 14, 2, 97 ,4, 42 ,3 };

	int i = 0;
	int size = 10;

	//sortieren
	for (i = 0; i < 10; i++)
	{
		int j;
		for( j = 0; j < size; j++)
		{
			if(iArray[j] > iArray[j+1])
			{
				int temp = iArray[j];
				iArray[j] = iArray[j + 1];
				iArray[j + 1] = temp;
			}
		}
	}

	// Ausgeben
	for (i = 1; i <= size; i++)
	{
		printf("%i ,", iArray[i]);
	}

	system("PAUSE");
}