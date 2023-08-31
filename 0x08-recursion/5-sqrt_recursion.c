#include"main.h"
/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n : input number
 * Return: the result
 */

int _sqrt_recursion(int n)
{
	int i;

	for (i = 0; (i * i) < n; i++)
	{
		if ((i * i) == n)
			return (i);
		return (-1);
	}
return (0);
}

