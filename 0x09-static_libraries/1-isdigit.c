#include "main.h"
		
/**
 * _isdigit - checks for a digit (0 through 9) in the program.
 *
 * @c: int to be checked in the program.
 *
 * Return: 1 if c is an integer, 0 otherwise in a program.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
