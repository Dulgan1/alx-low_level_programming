#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -function creates new dog
 * @name: name of new dog
 * @age: of new dog
 * @owner: of new dog
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, cbar *owner)
{
	dog_t *dog;
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
