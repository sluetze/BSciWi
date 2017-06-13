#include <stdio.h>

int main(int argc, char *argv[]){

	/* Erstellen Sie ein Menü mit den EInträgen + Funktionen
	1 = 
	*/
	int iAuswahl = 0;
	int iZahl1 = 0;
	int iZahl2 = 0;
	int iEingabe1 = 0;
	int iEingabe2 = 0;
	do {

		printf("was willst du tun? \n\n");
		printf("1 = Eingabe Zahl1\n");
		printf("2 = Eingabe Zahl2\n");
		printf("3 = Ausgabe der Summe\n");
		printf("4 = Ausgabe des Produkts\n");
		printf("5 = Differenz von Zahl1 - Zahl2\n");
		printf("6 = Division mit Beruecksichtigung div0\n");
		printf("7 = Ausgabe aller möglichen Multiplikationen von 1...Zahl1 * 1...Zahl2\n");
		printf("8 = Quadratwurzel fuer Zahl1 nach Heron-Verfahren\n");
		printf("9 = Beenden\n\n");

		scanf_s(" %d", &iAuswahl);

		if (iAuswahl == 9 || (iAuswahl == 8 && iEingabe1 != 0) || iAuswahl == 2 || iAuswahl == 1 || ((iEingabe1 != 0) && (iEingabe2 != 0)))
		{
			switch (iAuswahl)
			{
			case 1: printf("Bitte erste Zahl eingaben.\n");
				iEingabe1 = 1;
				scanf_s("%d", &iZahl1);
				break;
			case 2: printf("Bitte zweite Zahl eingeben.\n");
				iEingabe2 = 1;
				scanf_s("%d", &iZahl2);
				break;
			case 3: printf("Die Summe ist: %d\n", iZahl1 + iZahl2);
				break;
			case 4: printf("Das Produkt ist: %d\n", iZahl1 * iZahl2);
				break;
			case 5: printf("Die Differenz ist %d\n", iZahl1 - iZahl2);
				break;
			case 6: if (iZahl2 != 0) printf("%f\n", (float)iZahl1 / (float)iZahl2);
				break;
			case 7: 
				for (int i = 1; i <= iZahl1; i++) {
					for (int j = 1; j <= iZahl2; j++) {
						printf("Die Multiplikation von %d und %d ergibt %d\n", i, j, i*j);
					}
				}
			case 8: 
				{
					float fXalt;
					float fXneu = 1;
					do {
						fXalt = fXneu;
						fXneu = (fXalt + ((float)iZahl1 / fXalt)) / 2;
					} while (fXalt != fXneu);
					printf("Die Quadratwurzel nach Heron-Verfahren lautet %f\n", fXalt);
				}
			default:
				break;
			}

		}
		else
		{
			printf("DAU!")
		}
	} while (iAuswahl != 9);
}