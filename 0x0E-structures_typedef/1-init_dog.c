#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Initializes a dog structure function in the program.
  *
  * @d: A dog structure function in the program.
  *
  * @name: The name of the dog accordingly to the program.
  *
  * @age: The age of the dog according to the program.
  *
  * @owner: The owner of the dog according to the program.
  *
  * Return: Nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
