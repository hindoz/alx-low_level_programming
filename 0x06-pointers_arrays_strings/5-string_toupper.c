#include "main.h"

/**
 * string_toupper - convert lower_case letter to upper case
 * @str : string to be tested
 *
 * Return:  upper case string (Success)
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 96) && (str[i] < 123))
			str[i] -= 32;
	}
	return (str);

}
