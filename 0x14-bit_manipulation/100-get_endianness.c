#include "main.h"

/**
 * get_endianness - check the endianness function in the program.
 *
 * Return: 0 if big endian, 1 if small endian in the program.
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
