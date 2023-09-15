#include"function_pointers.h"

/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array
 * @array : array to be used
 * @size : size of the array
 * @action : pointer to action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int *p; 

	if (array == NULL || action == NULL)
		return;
	p = size / sizeof(int);
	while (array <= p)
	action(*array++);
}
