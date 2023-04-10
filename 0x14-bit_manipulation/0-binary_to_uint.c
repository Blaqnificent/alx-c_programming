#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * to_decimal - converts a character to an integer
 * @c: char to convert
 * Return: converted integer
 */
unsigned int to_decimal(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * binary_to_uint - Converts a string of 1s and 0s to an unsigned integer
 * @c: pointer to a string
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *c)
{
	unsigned int decimal, power, result = 0;

	int length = _strlen(c);

	if (!c)
		return (0);
	--length;
	power = 1;
	while (length >= 0)
	{
		if (c[length] != '0' && c[length] != '1')
		{
			return (0);
		}
		decimal = to_decimal(c[length]);
		result += decimal * power;
		power *= 2;
		length--;
	}
	return (result);

}
