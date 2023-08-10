#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %c\nSize of an int:%i\n", sizeof(char), sizeof(int));
	printf("Size of a long int: %d\n", sizeof(long));
	printf("Size of a long long int: %o\n", sizeof(long long));
	printf("Size of a float: %f", sizeof(float));
	return (0);
}

