#include <stdio.h>

// globale Variablen
int iMenge = 0;

// Prototyping
float Getraenke_auswahl();
float Getraenke_bezahlen();
void Getraenke_ausgeben();

int main(int argc, char * argv[])
{
	float fEinzahlung = 0;
	printf("GetraenkeAutomat v0.3\n");
	printf("\n--------Auswahlvorgang--------\n");
	float fPreis = Getraenke_auswahl(); // gibt den Preis zurück

	printf("\nDas kostet sie %f\n\n", fPreis);

	printf("\n--------Bezahlvorgang--------\n");
	do
	{
		printf("Es fehlen noch %f", fPreis - fEinzahlung);
		fEinzahlung += Getraenke_bezahlen(); //Gibt den einbezahlten Betrag zurück
	} while (fEinzahlung < fPreis);

	printf("\n--------Getraenkeausgabe--------\n");
	Getraenke_ausgeben();

	printf("ENDE");

}

float Getraenke_auswahl()
{
	int iGetraenk = 0;
	float iStueckpreis;
	printf("Waehlen Sie ihr Getraenk aus:\n");
	printf("1) Wasser\t(0,50 Euro)\n");
	printf("2) Limonade\t(1,00 Euro)\n");
	printf("3) Bier\t(2,00 Euro)\n");
	printf("Geben Sie 1-3 ein:");
	scanf_s("%d", &iGetraenk);
	printf("\nGeben sie die Menge ein:");
	scanf_s("%d", &iMenge);

	switch (iGetraenk)
	{
	case 1:		iStueckpreis = 0.5;
		break;
	case 2:		iStueckpreis = 1.0;
		break;
	case 3:		iStueckpreis = 2.0;
		break;
	default:	printf("Falsche Eingabe!");
		iStueckpreis = 0;
		break;
	}

	return iStueckpreis * iMenge;

}

float Getraenke_bezahlen()
{
	float fEinwurf = 0;
	printf("\nBitte werfen sie ein Geldstueck ein:");
	scanf_s("%f", &fEinwurf);

	return fEinwurf;
}

void Getraenke_ausgeben()
{
	int i = 1;
	for (int i = 1; i <= iMenge; i++)
	{
		printf("Flasche %d von %d wurde ausgegeben.\n", i, iMenge);
	}
	printf("\n\Vielen Dank, Bitte entnehmen Sie ihre Getraenke.");
}