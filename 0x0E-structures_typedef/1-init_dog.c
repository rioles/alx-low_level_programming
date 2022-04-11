#include "dog.h"
#include<string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - fuction which initialize dog object
 *
 *@d: dog structure
 *@name: name of dog
 *@age: age of dog
 *@owner: dog's owner
 *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
