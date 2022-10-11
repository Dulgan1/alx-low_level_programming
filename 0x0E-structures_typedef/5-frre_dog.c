#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory occupied by dog x_x
 * @d: dog instance in memory
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
