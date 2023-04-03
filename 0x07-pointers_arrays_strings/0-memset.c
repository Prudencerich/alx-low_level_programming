#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant bytes
 * @n: bytes
 * Return: 0 always (Success)
 */
char *_memset(char *p, char m, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		p[i] = m;
	return (p);
}
