#include"main.h"
/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @a : input matrix
 * @size : size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, l = 1;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - l];
		l++;
		a += size;
	}
	printf("%d, %d \n", sum1, sum2);

}
