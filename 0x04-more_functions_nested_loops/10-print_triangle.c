#include "main.h"

/**
 * print_triangle - Prints a triangle of squares according to the parameter.
 *
 * @size: The size of the squares triangle.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 1; x <= size; x++)
	{
		for (y = size - x; y > 0; y--)
			_putchar(' ');

		for (z = 1; z <= x; z++)
			_putchar('#');

		_putchar('\n');
	}
}

