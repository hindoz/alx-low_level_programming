#include"main.h"

/**
 * print_number - function that print an integar
 * @n : integar to be printed
 */

void print_number(int n)
{
	int *p;

	for (*p = n; *p != '\0'; p++)
	{
		putchar(*p + 48);
	}
}
