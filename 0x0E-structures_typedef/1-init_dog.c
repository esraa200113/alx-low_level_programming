#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to initialize
 * @name: String representing the dog's name
 * @age: Float representing the dog's age
 * @owner: String representing the owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) 
		return (0);
	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (d->name != NULL)
		strcpy(d->name, name);
	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d->owner != NULL)
		strcpy(d->owner, owner);
	d->age = age;
}

