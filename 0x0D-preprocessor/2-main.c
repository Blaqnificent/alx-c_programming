#include <stdlib.h>

/**
 * main - Prints to stdout the curent file being compiled from
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}
