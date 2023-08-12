#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, l;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (l = j + 1; l < 10; l++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + l);
				if ((i == 7) && (j == 8) && (l == 9))
					;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
