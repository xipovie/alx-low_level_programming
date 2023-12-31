#include "main.h"

/**
 * print_square - Prints 'size' squares according to 'size'.
 *
 * @size: The number of squares to print.
 *
 * Return: void
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
			_putchar('#');
		_putchar('\n');
	}
}

