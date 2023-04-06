#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am ", my_dog->name);
	printf("%.1f :) - Woof!\n", my_dog->age);
	free_dog(my_dog);
	return (0);
}
