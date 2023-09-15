#include"variadic_functions.h"

/**
 * print_strings - function that print strings
 * @separator : separator between strings
 * @n : number of the strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list st;

	va_start(st, n);
		if (n != 0)
		{
			for (i = 0; i < n; i++)
			{
				p = va_arg(st, char *);
				if (p == NULL)
					printf("nil");
				printf("%s", p);

				if (separator != NULL && n != (n - 1))
					printf("%s", separator);
			}
		}
	printf("\n");
	va_end(st);
}
