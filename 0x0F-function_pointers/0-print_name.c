#include "function_pointers.h"

/**
  * print_name - Prints a name as considered in the program.
  *
  * @name: The name to prints as considered in the program.
  *
  * @f: Pointer to function as it was used in the program.
  *
  * Return: NULL
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
