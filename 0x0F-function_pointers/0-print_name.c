#include"function_pointers.h"

/**
 * print_name - function that print name
 * @name : name should be print
 * @f : pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
