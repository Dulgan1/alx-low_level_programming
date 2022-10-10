#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: of the dog
 * Description: struct describes a dog and its owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initializes a variable of type struct dog
 * @d: address of datatype struct dog to be initialized
 * @name: member of struct dog to give name
 * @age: member of struct dog to give age
 * @owner: member of struct dog to give onwer name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
