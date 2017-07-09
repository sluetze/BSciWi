#include <stdio.h>
#define M_PI 3.14159265358979323846

/* für  a)
float berechneUmfang(float* r); // Funktionsdeklaration
float berechneFlaeche(float* r); // Funktionsdeklaration
*/

/* für b) */
void berechneUmfang(float* r, float* erg); // Funktionsdeklaration
void berechneFlaeche(float* r, float* erg); // Funktionsdeklaration

int main(int argc, char *argv[])
{
	float fRadius = 0;
	float fErgebnis;
	printf("Bitte geben Sie den Radius ein:\t");
	scanf_s("%f", &fRadius);
	/* a)
	printf("Der Umfang betraegt %f cm\n", berechneUmfang(&fRadius));
	printf("Die Flaeche betraegt %f cm^2\n", berechneFlaeche(&fRadius));
	*/

	/* b) */
	berechneUmfang(&fRadius, &fErgebnis);
	printf("der Umfang betraegt %f cm\n", fErgebnis);
	
	berechneFlaeche(&fRadius, &fErgebnis);
	printf("die Flaeche betraegt %f cm^2\n", fErgebnis);
	system("PAUSE");
}

/* a)
float berechneUmfang(float * r)
{
	return 2 * M_PI * *r;
}

float berechneFlaeche(float *r)
{
	return M_PI * (*r * *r);
}
*/

/* b) */

void berechneUmfang(float* r, float* erg)
{
	*erg = 2 * M_PI * *r;
}

void berechneFlaeche(float* r, float* erg)
{
	*erg = M_PI * (*r * *r);
}