#include"function_pointers.h"

/**
 * int_index - function that search for an integar
 * @array : pointer to received array
 * @size : size of an array
 * @cmp : pointer to a function that used
 * to compare
 * Return: return the index of matched int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

		if (array != NULL && size > 1 && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				return (i);
			}
		}
		return (-1);
}
