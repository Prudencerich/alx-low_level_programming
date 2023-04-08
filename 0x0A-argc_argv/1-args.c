#include "main.h"
#include <stdio.h>

/**
  * main - Prints the arguement number in the program
  *
  *
  * @argc: argument counts in program
  *
  * @argv: argument of vector in program
  *
  * Return: NULL always
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
