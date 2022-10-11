#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: of the dog
 * Description: struct describes a dog and its owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * init_dog - initializes a variable of type struct dog
 * @d: address of datatype struct dog to be initialized
 * @name: member of struct dog to give name
 * @age: member of struct dog to give age
 * @owner: member of struct dog to give onwer name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * new_dog -function creates new dog
 * @name: name of new dog
 * @age: of new dog
 * @owner: of new dog
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, cbar *owner);

/**
 * free_dog - frees the memory occupied by dog x_x
 * @d: dog instance in memory
 * Return: void
 */
                                                                                 void free_dog(dog_t *d);

/**
 * print_dog - prints a dog struct type dog's information
 * @d: address of dog
 * Return: void
 */

void print_dog(struct dog *d);

#endif
