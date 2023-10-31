#include <stdlib.h>
/**
 * free_grid - frees 2d dynamically allocated array
 * @grid: pointer to pointers of values
 * @height: number of rows
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}

	free(grid);

}
