#include "main.h"

/**
 * flip_bits - returns the NO of bits you would
 * need to flip to get from one NO to another in the program
 *
 * @n: NO one value.
 *
 * @m: NO two value.
 *
 * Return: the No of bits in the program
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
