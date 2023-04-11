#include "main.h"

/**
 * get_bit - get the bit at index n
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int total_bits;

	/* Check that the index is not out of range */
	total_bits = (sizeof(unsigned long int) * 8);
	if (index > total_bits)
		return (-1);
	bit = ((n >> index) & 1);
	return (bit);
}
