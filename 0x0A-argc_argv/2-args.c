#include"main.h"

/**
 * main - entry of program
 * @argc : count of arguments
 * @argv : array of arguments
 * Return: 0 when success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
