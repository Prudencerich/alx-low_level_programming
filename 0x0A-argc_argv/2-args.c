#include "main.h"
#include <stdio.h>

/**
  * main - Prints all arguement content in program
  *
  * @argc: argument counts in program
  *
  * @argv: arguments of vector in program
  *
  * Return: NULL always.
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
