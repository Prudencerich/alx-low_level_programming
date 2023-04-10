#include "main.h"

/**
 * _strpbrk - Entry point in the program.
 *
 * @s: input value in the program
 *
 * @accept: input function in the program.
 *
 * Return: Always NULL (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int k;


	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}


return ('\0');
}
