#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, l, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (l = 0; l < 10; l++)
			{
				for (k = 1; k < 10; k++)
				{
				putchar('0' + i);
				putchar('0' + j);
				putchar(' ');
				putchar('0' + l);
				putchar('0' + k);
				if ((i == 9) && (j == 8) && (l == 9) && (k == 9))
					;
				else
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
