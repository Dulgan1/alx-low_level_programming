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
	char *temp1;
	char *temp2;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;

	if (name != NULL)
	{
		temp1 = malloc(sizeof(_strlen(name) + 1));
		if (temp1 == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->name = _strcpy(name, temp1);
	}
	else
		dog->name = NULL;
	if (owner != NULL)
	{
		temp2 = malloc(sizeof(_strlen(owner) + 1));
		if (temp2 == NULL)
		{
			free(temp1);
			free(dog);
			return (NULL);
		}
		dog->owner = _strcpy(owner, temp2);
	}
	else
		dog->owner = NULL;
	return (dog);
}

/**
 * _strlen - gets the length of a string
 * @str: string to count
 * Return: int length of str
 */

int _strlen(char *str)
{
	int i  = 0;

	while (*(str + i))
		i++;

	return (i);
}

/**
 * _strcpy - copies string to another string
 * @a: first string copied from
 * @b: second string copied to
 * Return: b
 */

char *_strcpy(char *a, char *b)
{
	int i = 0;

	while (i <= _strlen(a))
	{
		b[i] = a[i];
		i++;
	}

	return (b);
}
