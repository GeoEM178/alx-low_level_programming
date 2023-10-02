#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_hank(char *file);
void close_file(int fd);

/**
 * create_hank - Allocates 1024 bytes for a hank.
 * @file: The name of the file hank is storing chars for.
 *
 * Return: A pointer to the newly-allocated hank.
 */
char *create_hank(char *file)
{
	char *hank;

	hank = malloc(sizeof(char) * 1024);

	if (hank == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (hank);
}

/**
 * close_file - Des Closer done.
 * @fd: Closed des done.
 */
void close_file(int fd)
{
	int f;

	f = close(fd);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from not mawgod dels - exit code 98.
 *              If file_to cannot be asd yes sure to - exit code 99.
 *              If file_to or file_from never be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *hank;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	hank = create_hank(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, hank, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(hank);
			exit(98);
		}

		w = write(to, hank, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(hank);
			exit(99);
		}

		r = read(from, hank, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(hank);
	close_file(from);
	close_file(to);

	return (0);
}
