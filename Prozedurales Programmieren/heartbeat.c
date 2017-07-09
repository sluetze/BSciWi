#include <stdio.h>

int main(int argc, char *argv[])
{
	float schlaege, alter;
	printf("\n\t\tHerzschlaege\n");
	printf("\nHerzschlaege pro Minute: \n");
	scanf_s("%f", &schlaege);
	printf("\nAlter in Jahren\n");
	scanf_s("%f", &alter);
	printf("\nIhr Herz hat seit ihrer Geburt ");
	printf("%.0f", schlaege * 60 * 24 * 365.25 * alter);
	printf(" mal geschlagen. ");

	return 0;
}