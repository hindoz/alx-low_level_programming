#include"main.h"

/**
 * reverse_array - function that print the array in reverse way
 * @a : received array
 * @n : number of elements of array
 */

void reverse_array(int *a, int n)
{
int i, j = 1;

	for (i = 0; i >= n - 1; i++)
	{
	a[i] = a[n - j];
	j++;
	}
}
