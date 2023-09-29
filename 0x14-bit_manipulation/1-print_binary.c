#include "main.h"

/**
 * print_binary - print the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int actual;

	for (i = 63; i >= 0; i--)
	{
		actual = n >> i;

		if (actual & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

