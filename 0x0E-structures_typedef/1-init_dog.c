#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: address of datatype struct dog to be initialized
 * @name: member of struct dog to give name
 * @age: member of struct dog to give age
 * @owner: member of struct dog to give onwer name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		free(d);
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
