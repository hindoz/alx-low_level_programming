#include"main.h"

/**
 * reverse_array - function that print the array in reverse way
 * @a : received array
 * @n : number of elements of array
 */

void reverse_array(int *a, int n)
{
int i, j = n - 1, l;

	for (i = 0; i < j; i++)
	{
	l = a[i];
	a[i] = a[j];
	a[j] = l;
	j--;
	}
}
