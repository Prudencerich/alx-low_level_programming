#include "main.h"

/**
 * get_bit - To return the value of a bit at a given
 * index function in the program.
 *
 * @n: unsigned long integer input function in the program.
 *
 * @index: index of the bit value in the program.
 *
 * Return: The value of the bit in the program.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
