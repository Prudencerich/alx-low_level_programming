#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself according to the functions in the program.
 *
 * @argc: The numbers of args supplied according to the program.
 *
 * @argv: An array of pointers to the args in the program.
 *
 * Return: Always NULL
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == bytes - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
