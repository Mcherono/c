#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @file: text file being read
 * @l: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or file is NULL.
 */
ssize_t read_textfile(const char *file, size_t l)
{
	char *b;
	ssize_t f;
	ssize_t a;
	ssize_t c;

	f = open(file, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * l);
	c = read(f, b, l);
	a = write(STDOUT_FILENO, b, c);

	free(b);
	close(f);
	return (a);
}
