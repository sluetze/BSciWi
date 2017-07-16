#include <stdio.h>

#include <stdlib.h>
#include <time.h>
int main()
{
	/*
	long lEuro, lMaxEuro;
	double dKurs;
	printf("\n\n* * * KURSTABELLE € - USD * * *");
	printf("\nBitte den Kurs € - USD eingeben: ");
	fflush(stdout);
	scanf_s("%lf", &dKurs);
	printf("\nBitte die Obergrenze der Tabelle eingeben:");
	fflush(stdout);
	scanf_s("%ld", &lMaxEuro);
	printf("\n%10s %10s\n", " €", "USD");
	for (lEuro = 1; lEuro <= lMaxEuro; lEuro++) {
		printf("%10ld %10.2f\n", lEuro, lEuro / dKurs);
	}

	printf("\nwhile\n");
	lEuro = 1;
	while (lEuro <= lMaxEuro)
	{
		printf("%10ld %10.2f\n", lEuro, lEuro / dKurs);
		lEuro++;
	}*/

	//Der Computer "merkt" sich eine Zufallszahl zwischen 1 und 15, die der Spieler
	//(= Benutzer) erraten soll.Der Spieler hat insgesamt drei Versuche.
	//	Nach jedem falschen Versuch gibt der Computer an, ob die angegebene Zahl
	//	zu klein oder zu groß ist.Ist auch der dritte Versuch erfolglos, wird die
	//	gesuchte Zahl ausgegeben.Der Spieler hat gewonnen, wenn er spätestens im
	//	dritten Versuch die Zahl errät.Er soll das Spiel beliebig oft wiederholen
	//	können.Verwenden Sie die Systemzeit zur Initialisierung des Zufallsgenerators
	//	wie folgt :

	time_t sec;
	sec = time(NULL); /* Zeit in Sekunden ermitteln */
	srand(sec); /* Initialisierung */

	int iRatezahl = rand() % 15 + 1;
	int iInput = 0;
	int iMaxVersuche = 3;
	int i = 1;
	do {
		printf("\nBitte erraten Sie die geheime Zahl Versuch %i von %i\t", i, iMaxVersuche);
		scanf_s("%i", &iInput);
		if (iInput < iRatezahl) printf("gesuchte Zahl ist groesser\n");
		if (iInput > iRatezahl) printf("gesuchte Zahl ist kleiner\n");
		

	} while (iInput != iRatezahl && ++i <= iMaxVersuche);

	printf("\nDie Zahl war %i\n", iRatezahl);

	system("PAUSE");
	return 0;
}