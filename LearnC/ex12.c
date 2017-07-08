#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if(argc <= 2){
		if(argc == 1) printf("no arguments sucker! add some\n");
		if(argc == 2) printf("You only have one argument. You suck!\n");
	}
	else if (argc > 1 && argc < 5) {
		for (i = 0; i < argc; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else {
		printf("You have too many arguments. You suck.\n");
	}
	return 0;
}
