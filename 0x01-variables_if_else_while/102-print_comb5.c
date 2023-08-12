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
			for (k = i; l < 10; k++)
			{
			/*	if (k == i)
					l = j + 1;
				
				else
				{
					l = 0;
				}*/
				for (; l < 10; l++)
				{
				putchar('0' + i);
				putchar('0' + j);
				putchar(' ');
				putchar('0' + k);
				putchar('0' + l);
				if ((i == 9) && (j == 8) && (k == 9) && (l == 9))
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
