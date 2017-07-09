#include <stdio.h>
#include <math.h>

//Prototyping
double number_sum(float number1, float number2);
float number_read();

int main(int argc, char *argv[])
{
	float fZahl1, fZahl2;
	printf("Taschenrechner:\n\n");
	fZahl1 = number_read();
	fZahl2 = number_read();
	printf("\n\n das ergebnis der Summenbildung ist: %.2lf", number_sum(fZahl1, fZahl2));
	return 0;
}

float number_read()
{
	float fInput;
	printf("please insert a number (nn[.nnn])");
	scanf_s("%f", &fInput);

	return fInput; // hier arbeite ich mit stack!
}

double number_sum(float number1, float number2)
{
		//this is just useless. i could do this in main
		return number1 + number2;
}