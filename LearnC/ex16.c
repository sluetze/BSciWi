#include <stdio.h>  	//include basic input/output
#include <stdlib.h> 	//include malloc and stuff
#include <assert.h>	//get the checks if we got valid memory
#include <string.h>	//have the possibility to copy string (strdup)

// Create a struct, which has a string named name, and three ints for age, height and weight
// This is the DEKLARATION
struct Person{
	char *name;
	int age;
	int height;
	int weight;
};

//a function which gets the memory and stores the values there
struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person)); //getting memory
	assert(who != NULL); //making sure we got some memory

	who->name = strdup(name); 	//copy the VALUE of the string (unitl \0) to that place (carefull this is a point of char!)
	who->age = age; 		//set the value of who->age to age
	who->height = height;		//set the value of who->height to height
	who->weight = weight;		//set the value of who->weight to weight

	return who; //since who is a pointer of struct person this returns the ADDRESS of the beginning of the pointer
}

void Person_destroy(struct Person *who)
{
	assert(who != NULL); //check we realy got something

	free(who->name);	//explicitly free the stringset
	free(who);		//free the memory allocated by who
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);	// Output the VALUE of who-name
	printf("\tAge: %d\n", who->age);	// Output the VALUE of who->age
	printf("\tHeight: %d\n", who->height);	// Output the VALUE
	printf("\tWeight: %d\n", who->weight);	// Output the VALUE
}

int main(int argc, char *argv[])
{
	// make two people structures
	struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
	struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

	//print them out and where they are in memory
	printf("Joe is at memory location %p:\n", joe); //we print out the ADDRESS of joe (with %p) NOT the struct.
	Person_print(joe);				// we print out the struct with our subfunction

	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);

	//let's make them a little bit older
	joe->age += 20;
	joe->height -= 2;
	joe->weight += 40;
	Person_print(joe);

	frank->age += 20;
	frank->weight += 20;
	Person_print(frank);

	// destroy them!
	Person_destroy(joe);
	Person_destroy(frank);

	return 0;
}
