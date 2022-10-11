#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Alwaays 0.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Sergent";
	my_dog.age = 4.5;
	my_dog.owner = "Rotimi";
	printf("My name is %s, and I am %.1f : ) - woof!\n", my_dog.name, my_dog.age);
	return(0);
}
