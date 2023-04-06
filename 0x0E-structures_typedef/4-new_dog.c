#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL || name == NULL || owner == NULL)
		return (NULL);
	dog->name = strdup(name);
	dog->age = age;
	dog->owner = strdup(owner);
	return (dog);
}
