#include"main.h"
/**
 * free_grid - function used to  frees a 2 dimensional grid
 * @grid : grid need to be free
 * @height : height of the grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
