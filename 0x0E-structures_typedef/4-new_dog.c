#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -function creates new dog
 * @name: name of new dog
 * @age: of new dog
 * @owner: of new dog
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, len1, len2;
	i = 0, len1 = 0, len2 = 0;
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (name[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;
	while (owner[i] != '\0')
	{
		len2++;
		i++;
	}
	for (i = 0; i <= len1; i++)
		dog->name[i]  = name[i];
	dog->age = age;
	for (i = 0; i <= len2; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
