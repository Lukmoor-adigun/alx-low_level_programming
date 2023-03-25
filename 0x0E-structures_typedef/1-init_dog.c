#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		putchar('\n');
	}
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		putchar('\n');
	}
	strcpy(d->owner, owner);
}
