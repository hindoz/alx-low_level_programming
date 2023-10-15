#include"main.h"

/**
 * binary_to_uint - function that convert binary num to int.
 * @b : binary number needs to be converted.
 * Return: the resulted integar.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int str_len = 0, bse = 1;

	if (!check_string(b))
		return (0);

	while (b[str_len] != '\0')
		str_len++;

	while (str_len)
	{
		dec += ((b[str_len - 1] - '0') * bse);
		bse *= 2;
		str_len--;
	}
	return (dec);
}

/**
 * check_string - checks if a string has only 0's and 1's
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int check_string(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
