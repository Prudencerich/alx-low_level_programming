#include "main.h"
		
/**
 * _isalpha - checks for alphabetic character in functions.
 *
 * @c: the character to be checked in functions.
 *
 * Return: 1 if c is a letter, 0 otherwise in functions.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
