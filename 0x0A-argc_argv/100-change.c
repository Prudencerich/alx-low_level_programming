#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of coins to
 *        make change for a specified amount of money to the program.
 *
 * @argc: The number of arguments supplied in the program program.
 *
 * @argv: An array of pointers arguments in the program
 *
 * Return: If the arguments number is not exactly one - 1.
 *         Or - 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
