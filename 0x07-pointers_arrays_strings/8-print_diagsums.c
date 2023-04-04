#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - entry point of the program
 *
 * @a: input
 *
 * @size: input
 *
 * Return: 0 always (success)
 */

void print_diagsums(int *a, int size)
{
	int i, n, sum6 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum6 = sum6 + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	sum6 = sum6 + a[n];
	printf("%d, %d\n", sum6, sum2);
}

