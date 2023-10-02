#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - See the text value of the file.
 * @filename: Name of file pointer.
 * @letters: The letters numbers
 *           function must read and print.
 *
 * Return: If the function fails or the filename is NULL - 0.
 *         O/w - the total of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *nsra;

	if (filename == NULL)
		return (0);

	nsra = malloc(sizeof(char) * letters);
	if (nsra == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, nsra, letters);
	w = write(STDOUT_FILENO, nsra, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(nsra);
		return (0);
	}

	free(nsra);
	close(o);

	return (w);
}
