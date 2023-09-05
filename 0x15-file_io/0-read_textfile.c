#include "main.h"
/**
 * read_textfile - Reads a text file and prints
 * the specified number of letters.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to print.
 *
 * Return: The number of letters printed. If it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nd, nr;
	char *buffer;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nd = read(f, buffer, letters);
	nr = write(STDOUT_FILENO, buf, nrd);

	close(f);

	free(buffer);

	return (nr);
}
