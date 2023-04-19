#include "function_pointers.h"

/**
  * int_index - ...entry point in the program
  *
  * @array: ...function in the program
  *
  * @size: ...function in the program
  *
  * @cmp: ...function in the program
  *
  * Return: ...NULL
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
