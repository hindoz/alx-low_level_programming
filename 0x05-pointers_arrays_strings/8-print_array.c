#include<stdio.h>

/**
 * print_array - prints n elements of an array
 * @n : numbers of elements
 * @a : pointer to array
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	if (i != (n - 1))
	printf("%d, ", *a);
	else
	printf("%d", *a);
a++;
}
printf("\n");
}
