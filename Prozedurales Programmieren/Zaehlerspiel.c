#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{

time_t sec;
char cNochmal = 'y';


	do {
		printf("lass uns ein spiel spielen\n");
		cNochmal = 'y';
		sec = time(NULL);	/* Zeit in Sekunden ermitteln */
		srand(sec);			/*Initialisierung */
		int iSecret = rand() % 15 +1;
		int iGuessed;
		int iTries = 0;
		
		do {
			printf("Bitte errate eine Zahl\n");
			scanf_s("%d", &iGuessed);
			fflush(stdin);

			/* Ausgabe, ob die Zahl größer oder kleiner ist*/
			if (iSecret > iGuessed) printf("Die geheime Zahl ist groesser\n");
			if (iSecret < iGuessed) printf("Die geheime Zahl ist kleiner\n");

			iTries++;
		} while ( (iSecret != iGuessed) && (iTries < 3) );

		if (iSecret == iGuessed) {
			printf("Die Zahl %d wurde erraten\n", iSecret);
		}
		else {
			printf("Du noob hast die Zahl %d nicht erraten\n", iSecret);
		}

		/* Schleife zur Sicherstellung der sauberen Codeeingabe */
		do {
			printf("Neue Runde (j/n)\n");
			scanf_s(" %c", &cNochmal, 1);
			fflush(stdin);
		} while ((cNochmal != 'y') && (cNochmal != 'n') )
	} while (cNochmal != 'n');
	return 0;
}