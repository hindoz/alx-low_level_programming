#include"main.h"
/**
 * alloc_grid - function returns a pointer to
 * a 2 dimensional array of integers.
 * @width : width of the 2D array
 * @height : height of the 2D array
 * Return: return pointer to the aray or NULL otherwise
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int p[width][height];

	if ((width > 0) && (height > 0))
	{
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
				p[i][j] = 0;
		}
		/*return (**p);*/
	}
	else
		return (NULL);
	return (0);
}
