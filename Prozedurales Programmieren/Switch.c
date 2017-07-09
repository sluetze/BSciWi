#include <stdio.h>

/*
int main(int argc, char *argv[])
{
	// Der Benutzer soll eine Zahl als Kennzeichen für einen Wochentag angeben
	//(1 = Montag, 2 = Dienstag etc.).Auf dem Bildschirm soll daraufhin der Name des
	//	Wochentags erscheinen 

	int iZahl = 1;

	while (iZahl != 0)
	{
		printf("Bitte geben Sie eine Zahl ein:");
		fflush(stdin);
		scanf_s("%d", &iZahl);

		if (iZahl > 7) iZahl = iZahl % 7;

		switch (iZahl)
		{
		case 0:		printf("Sonntag");
			break;

		case 1:		printf("Montag");
			break;

		case 2:		printf("Dienstag");
			break;

		case 3:		printf("Mittwoch");
			break;

		case 4:		printf("Donnerstag");
			break;

		case 5:		printf("Freitag");
			break;

		case 6:		printf("Samstag");
			break;

		case 7:		printf("Sonntag");
			break;

		default:	printf("Something wrong");
			break;
		}
	}
}*/

int main(int argc, char *argv[])
{
	// Abwandlung 03.10: Geben Sie für Montag bis Mittwoch „erste Wochenhälfte“,
	//für Donnerstag und Freitag „zweite Wochenhälfte“ und für Samstag und
	//Sonntag „Wochenende“ aus.

	int iZahl = 1;
	while (iZahl != 0)
	{
		printf("Bitte eine Zahl eingeben:\t");
		scanf_s("%d", &iZahl);

		if (iZahl > 7) iZahl = iZahl % 7;

		switch (iZahl)
		{
			case 1: //fallthrough
			case 2: //fallthrough
			case 3: printf("\nErste Wochenhaelfte\n");
				break;
			case 4: //fallthrough
			case 5: printf("\nZweite Wochenhaelfte\n");
				break;
			case 6: //fallthrough
			case 7: printf("\nWochenende!!\n");
				break;
			default: printf("something went wrong");
				break;
		}
	}
}