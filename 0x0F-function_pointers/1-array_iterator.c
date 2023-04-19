#include "function_pointers.h"

/**
  * array_iterator - ... in the program.
  *
  * @array: ... function in the program.
  *
  * @size: ... function in the program.
  *
  * @action: ... function in the program.
  *
  * Return: ... NULL
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
