#include "main.h"
/**
 * _strncat - concatenate two strings in the programs.
 *
 * using at most n bytes from src in the program.
 *
 * @dest: input value in the program.
 *
 * @src: input value in the program.
 *
 * @n: input value in the program.
 *
 * Return: dest in the program.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
