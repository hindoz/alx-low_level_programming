#include"main.h"
/**
 * create_array - function used to create an array
 * @size : size of the string
 * @c : elements of an array
 * Return: return pointer to the aray or NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	int i = 0;

	p = malloc(sizeof(char) * size);

	if (size > 0)
	{
		/*p[i] = c % 16;*/
		*p = c;
		i++;
		return (p);
	}
	else
		return (NULL);
}
