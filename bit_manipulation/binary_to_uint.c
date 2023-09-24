#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary into  unsigned int
 * @b: string of type char
 * Return: converted number and  0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, p;
	int l;

	if (b == NULL)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
	}

	for (p = 1, sum = 0, l--; l >= 0; l--, p *= 2)
	{
		if (b[l] == '1')
			sum += p;
	}

	return (sum);
}
