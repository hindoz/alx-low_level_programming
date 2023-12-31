#include "main.h"

/**
 * create_buf - Allocates 1024 bytes for a buffer.
 * @file: name of the file buffer which storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Close the file descriptors.
 * @fdc: The file descriptor to be closed.
 */
void close_file(int fdc)
{
	int l;

	l = close(fdc);

	if (l == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdc);
		exit(100);
	}
}

/**
 * main - Copies the contents from file to another one.
 * @argc: number of arguments given to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, re, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		wr = write(to, buf, re);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		re = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);
	free(buf);
	close_file(from);
	close_file(to);
	return (0);
}
