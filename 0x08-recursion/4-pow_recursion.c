#include"main.h"
/**
 * _pow_recursion - function that returns
 * the value of x raised to the power of y
 * @x : the base value
 * @y : the power value
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	int i = 0, result = 1;

	if (y < 0)
		return (-1);
	while (i < y)
	{
		result *= x;
		i++;
	}
	return (result);
}
