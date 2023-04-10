#include "main.h"

/**
 * _strstr - Entry point in the program.
 *
 * @haystack: input function in the program.
 *
 * @needle: input function in the program.
 *
 * Return: Always NULL (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}


		if (*p == '\0')
			return (haystack);
	}


	return (0);
}
