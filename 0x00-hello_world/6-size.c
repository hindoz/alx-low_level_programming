#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = sizeof(char);
	int i = sizeof(int);
	int l = sizeof(long int);
	int d = sizeof(long long int);
	int f = sizeof(float);

	printf("Size of a char: %i byte(s)\n", c);
	printf("Size of an int: %i byte(s)\n", i);
	printf("Size of a long int: %i byte(s)\n", l);
	printf("Size of a long long int: %i byte(s)\n", d);
	printf("Size of a float: %i byte(s)\n", f);
	return (0);
}

