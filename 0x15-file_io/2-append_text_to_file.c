#include "main.h"

/**
 * append_text_to_file - New appending text for file.
 * @filename: A pointer file name sure.
 * @text_content: New file going to be added.
 *
 * Return: When the function fails or the filename is NULL - -1.
 *         When the file doesnt exist - -1.
 *         Else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, ads = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ads = 0; text_content[ads];)
			ads++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, ads);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
