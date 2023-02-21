#include "main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int row;
	int column;
	int product;

	for (row = 0; row <= 9; row++)
	{
		_putchar(48)
		for (column = 1; column <= 9; column++)
		{
			product = (row * column);
			_putchar(44);
			_putchar(32);
			if (product <= 9)
			{
				_putchar(32);
				_putchar(48 + product);
			}
			else
			{
				_putchar(48 + (product / 10));
				_putchar(48 + (product % 10));
			}
		}
		_putchar('\n');
	}
}
