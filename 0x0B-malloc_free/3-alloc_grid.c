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
	int i, j, **p;

	if ((width <= 0) && (height <= 0))
		return (NULL);

	p = malloc(sizeof(int *) * (height));

		if (height <= 0 || width <= 0 || p == NULL)
			return (NULL);

	for (i = 0; i < height; i++)
	{
	p[i] = malloc(sizeof(**p) * width);
	if (p[i] == 0)
	{
	while (i--)
	free(p[i]);
	free(p);
	return (NULL);
	}

		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
