#include "main.h"

/**
 * _strncpy - copies a string function im the program.
 *
 * @dest: input value in the program
 *
 * @src: input value in the program.
 *
 * @n: input value in the program.
 *
 * Return: dest function in the program.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;


	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}


	return (dest);
}
