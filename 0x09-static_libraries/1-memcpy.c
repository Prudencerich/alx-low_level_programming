#include "main.h"
/**
 *_memcpy - a function that copies memory area in the program.
 *
 *@dest: memory where it is stored in the program.
 *
 *@src: memory where it is copied in the program.
 *
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed in the program.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
