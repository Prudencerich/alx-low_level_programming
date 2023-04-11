#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars functions in string.
  *
  * @size: The size of the array in the program
  *
  * @c: The char to fill in the array during execution.
  *
  * Return: The array filled in the program
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
