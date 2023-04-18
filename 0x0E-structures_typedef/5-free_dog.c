#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - ... entry point in the program.
  *
  * @d: Dest function in the program.
  *
  * Return: NULL
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
