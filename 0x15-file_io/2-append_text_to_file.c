#include "main.h"

/**
 * append_text_to_file - Adds text to the end of a file.
 * @filename: A reference to the name of the file.
 * @text_content: The string to append to the file's end.
 *
 * Return: If the function fails or if filename is NULL - -1.
 *         If the file doesn't exist or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
