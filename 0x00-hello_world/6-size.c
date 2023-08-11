#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	float f;
	long long int o;
	long int d;

	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(d));
	printf("Size of a long long int: %o byte(s)\n", sizeof(o));
	printf("Size of a float: %f byte(s)\n", sizeof(f));
	return (0);
}

