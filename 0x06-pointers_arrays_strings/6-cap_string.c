#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str : string to be tested
 *
 * Return:  upper case string (Success)
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ') || (str[i] == ';') || (str[i] == '{') && (str[i+1] >= 97) && (str[i+1] = < 122))
			str[i + 1] -= 32;
			else if ((str[i] == '}') || (str[i] == '(') || (str[i] == ')') || (str[i] == '.') && (str[i+1] >= 97) && (str[i+1] =< 122))
			str[i + 1] -= 32;
				else if ((str[i] == ',') || (str[i] == '?') || (str[i] == '"') || (str[i] == '!') && (str[i+1] >= 97) && (str[i+1] = < 122))
			 str[i + 1] -= 32;
	}
	return (str);

}
