
#include <stdio.h>


// int argc gibt den argument-count wieder
// char *argv[] ist ein array in dem die übergebenen Argumente gespeichert werden
int main(int argc, char *argv[])
{
	int intZahl1 = 5000000000; // die Zahl ist zu groß um im zur verfügung gestellten speicherplatz bereitgestellt zu werden. Default int ist "signed int" daher ist ein Bit weniger für die Speicherung vorhanden
	int intZahl2 = 5000000000;
	return 0;
}