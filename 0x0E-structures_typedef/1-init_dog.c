#include "dog.h"
/**
 * init_dog - initialize a variable type
 * @d: pointer to a struct dog
 * @name: name of a  dog
 * @age: age of a dog
 * @owner: owner's name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = strdup(name);
		d->age = age;
		d->owner = strdup(owner);
	}
}
