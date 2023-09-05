#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to which text should be appended.
 * @text_content: The content to be added to the file.
 *
 * Return: 1 if the operation is successful, -1 if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int n;
	int rw;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;
		rw = write(f, text_content, n);

		if (rw == -1)
			return (-1);
	}

	close(f);

	return (1);
}
