#include"main.h"
/**
 * is_prime_number - fuction that  returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: input number
 * Return: the result
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	if ((n % 2) != 0 && (n % 3) != 0 && (n % 5) != 0)
		return (1);
	return (0);
}
