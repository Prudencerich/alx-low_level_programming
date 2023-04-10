#include "main.h"

/**
 * _strlen - returns the length of a string in the program.
 *
 * @s: string function in the program.
 *
 * Return: length function in the program.
 */
int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}


	return (longi);
}
