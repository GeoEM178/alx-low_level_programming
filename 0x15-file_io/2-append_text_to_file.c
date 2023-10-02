#include "main.h"

/**
 * append_text_to_file - Appends text file with some text end.
 * @filename: Name pointer to some.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or the filename is NULL - -1.
 *         If the file is not already on the user lacks written permissions - -1.
 *         Else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, lennnl = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lennnl = 0; text_content[lennnl];)
			lennnl++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, lennnl);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
