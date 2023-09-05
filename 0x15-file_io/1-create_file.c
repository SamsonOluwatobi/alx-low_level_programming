#include "main.h"
/**
 * create_file - Creates a file and writes content to it.
 * @filename: The name of the file to be created.
 * @text_content: The content to be written to the file.
 *
 * Return: 1 if the operation is successful, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int n;
	int rw;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	rw = write(f, text_content, n);

	if (rw == -1)
		return (-1);

	close(f);

	return (1);
}
