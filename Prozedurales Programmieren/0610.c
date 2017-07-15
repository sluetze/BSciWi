#include <stdio.h>
// Prototypen
// Anzeigen
void printArray(int *array, int size);
// Rückgabe vom Maximum
int getMax(int *array, int size);
// Rückgabe vom Minimum
int getMin(int *array, int size);
// Rückgabe vom Mittelwert
float getAverage(int *array, int size);
// sortieren mit BubbleSort
void sort(int *array, int size);

int main(int argc, char *argv[]) {
	int array[10] = { 4, 19, 20, 7, 36, 18, 1, 5, 66, 45 };
	printArray(array, 10);
	printf("\nMax: %d\n", getMax(array, 10));
	printf("Min: %d\n", getMin(array, 10));
	printf("Mittelwert: %.2f\n", getAverage(array, 10));
	sort(array, 10);
	printArray(array, 10);
	system("PAUSE");
	return 0;
}

void printArray(int *array, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%i, ", *(array + i));
	}
}

int getMax(int *array, int size)
{
	int i;
	int iMax = 0;
	for (i = 0; i < size; i++)
	{
		if (iMax < *(array + i)) iMax = *(array + i);
	}
	return iMax;
}

int getMin(int *array, int size)
{
	int i, iMin = 2500000;
	for (i = 0; i < size; i++)
	{
		if (iMin > *(array + i)) iMin = *(array + i);
	}

	return iMin;
}

float getAverage(int *array, int size)
{
	int i;
	float fAvg = 0;
	for (i = 0; i < size; i++)
	{
		fAvg += *(array + i);
	}
	return fAvg / size;
}

void sort(int *array, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		int j;
		for (j = 0; j < size -1; j++)
		{
			if (*(array + j) > *( array + (j + 1)))
			{
				int temp = *(array +j);
				*(array + j) = *(array +(j + 1));
				*(array + (j + 1)) = temp;
			}
		}
	}
}