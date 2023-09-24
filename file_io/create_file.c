#include "main.h"

/**
 * create_file - Creates a file.
 * @file: A pointer to the name of the file to create.
 * @text: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *file, char *text)
{
	int f, a, length = 0;

	if (file == NULL)
		return (-1);

	if (text != NULL)
	{
		for (length = 0; text[length];)
			length++;
	}

	f = open(file, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(f, text, length);

	if (f == -1 || a == -1)
		return (-1);

	close(f);

	return (1);
}
