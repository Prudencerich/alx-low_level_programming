#include <stdio.h>
#include "main.h"

/**
 * _strchr - entry point of the program
 * @c: input
 * @s: input
 * Return: 0 always (success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
