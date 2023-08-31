#include"main.h"
/**
 * factorial - fuction that calculate the factorial of the argument
 * @n : input argument
 * Return: the factorial
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
