#include "main.h"

/**
  * _print_rev_recursion - Prints a string in reverse position.
  *
  * @s: let the string to reverse.
  *
  * Return: NULL.
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
