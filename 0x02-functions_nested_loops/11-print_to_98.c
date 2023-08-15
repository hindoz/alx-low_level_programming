#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - print all natural numbers till 98
 *
 * @n : tested number
 *
 */

void print_to_98(int n)
{
	while (n < 99)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		n++;
	}
}
