#include"main.h"
/**
 * array_range - function that creates an array of integars
 * @min : beginning value
 * @max : last value
 * Return: return pointer to the created array
 */

int *array_range(int min, int max)
{
	int i, j, *ptr;

	ptr = malloc(min * max);
	if (ptr == NULL || min > max)
		return (NULL);
	j = (max - min) + 1;
	for (i = 0; i <= j; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
