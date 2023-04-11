#include "main.h"

/**
 * print_binary - Prints to stdout the binary representation of the param
 * @numb: Number to convert to integer
 */

void print_binary(unsigned long int numb)
{
	unsigned long int numb_int = numb, mask = 1;
	int length = 0;

	while (numb_int > 0)
	{
		length++;
		numb_int >>= 1;
	}
	length -= 1;

	if (length > 0)
		mask = mask << length;

	while (mask > 0)
	{
		if (numb & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
