#include "main.h"
#include <stdlib.h>

/**
  * free_grid - ... function in the program.
  *
  * @grid: ... function in the program.
  *
  * @height: ... function in the program.
  *
  * Return: ...function in the program.
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
