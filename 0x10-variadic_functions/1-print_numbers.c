#include"variadic_functions.h"

/**
 * print_numbers - function that print numbers followed by new line
 * @separator : string to be printed between numbers
 * @n : numbers of integars passed to funtion
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list nm;

	va_start(nm, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(nm, unsigned int);

			printf("%d", num);

			if (separator != NULL && i != (n - 1))
			printf("%s", separator);

		}

	}
	printf("\n");
	va_end(nm);
}
