#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representations
 * @a: decimal number to be print as binary
 */
void print_binary(unsigned long int a)
{
	unsigned long int temp;
	int t;

	if (a == 0)
	{
		printf("0");
		return;
	}

	for (temp = a, t = 0; (temp >>= 1) > 0; t++)
		;

	for (; t >= 0; t--)
	{
		if ((a >> t) & 1)
			printf("1");
		else
			printf("0");
	}
}
