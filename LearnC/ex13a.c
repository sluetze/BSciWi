#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2) {
		printf("ERROR: you need one argument.\n");
		//abort program
		return 1;
	}

	int i = 0;
	for(i = 0; argv[1][i] != '\0';i++) {
		char letter = argv[1][i];
		if (letter > 64 && letter < 91 )
		{
			letter = letter + 32;
		}

		switch(letter) {
			case 'a': //fallthrough
				printf("%d: 'A'\n", i);
				break;

			case 'e': //fallthrough
				printf("%d: 'E'\n", i);
				break;

			case 'i'://fallthrough
				printf("%d: 'I'\n", i);
				break;
			
			case 'o'://fallthrough
				printf("%d: 'O'\n", i);
				break;

			case 'u'://fallthrough
				printf("%d: 'U'\n", i);
				break;

			case 'y'://fallthrough
				if(i > 2) {
					//it's only sometimes Y
					printf("%d: 'Y'\n", i);
				}
				break;

			default:
				printf("%d: %c is not a vowel\n", i, letter);
		}
	}
	return 0;
}
