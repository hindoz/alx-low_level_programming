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
	int result;

	if (y < 0)
		result = -1;
	else if (y == 0)
		result = 1;
	else
		result = (x * _pow_recursion(x, y - 1));
	return (result);
}
