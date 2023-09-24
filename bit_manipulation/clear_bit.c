#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of bit to 0 for  given index
 * @n: pointer to decimal number to be apended
 * @index: index position to be apend
 * Return: 1 if it successful , -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int g;

	if (index > 64)
		return (-1);
	g = index;
	for (i = 1; g > 0; i *= 2, g--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
