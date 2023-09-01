#include"main.h"

/**
 * main - entry of program
 * @argc : count of arguments
 * @argv : array of arguments
 * Return: 0 when success
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		result = i * j;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
