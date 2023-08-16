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
	if (n < 99)
	{
	while (n < 99)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		n++;
	}
	}
	else if (n > 97)
	{
		while (n > 97)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	_putchar('\n');

}
