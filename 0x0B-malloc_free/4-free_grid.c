#include<stdio.h>
#include"main.h"
#include <stdlib.h>
/**
 * free_grid - that returns a pointer to a 2 dimensional array
 *@grid: describe two dimension array
 *@height: Describe the integer
 *Return: a always sucsess
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);
}
