#include"main.h"

/**
 * main - entry of program
 * @argc : count of arguments
 * @argv : array of arguments
 * Return: 0 when success
 */

int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
			printf("Error\n");
		else
			j += atoi(argv[i]);
	}
	printf("%d", j);
	return (0);
}
