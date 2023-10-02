#include "main.h"

/**
 * create_file - Make a new file.
 * @filename: A pointer point to name to created.
 * @text_content: A string pointer to process write.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, lennnl = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lennnl = 0; text_content[lennnl];)
			lennnl++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, lennnl);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
