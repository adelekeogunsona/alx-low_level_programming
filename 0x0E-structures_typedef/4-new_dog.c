#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog from structure dog_t
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog;
	dog_t *ptr = &my_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;

	return (ptr);
}
