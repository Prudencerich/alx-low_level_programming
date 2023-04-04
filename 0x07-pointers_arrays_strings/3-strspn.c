#include "main.h"

/**
 * _strspn - entry point of the program
 *
 * @s: input
 *
 * @accept: input
 * Return: 0 always (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, values, check;

	values = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				values++;
				check = 1;
			}
		}

		if (check == 0)
			return (values);
	}

	return (values);
}
