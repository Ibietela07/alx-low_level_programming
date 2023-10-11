#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints that struct decleared for dog d
 *
 * @d: the new dog d of the struct type
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	if (!(d->name))
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);

	if (!(d->owner))
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
	}
}
