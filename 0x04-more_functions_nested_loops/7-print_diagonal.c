#include "main.h"

/**
 * print_diagonal - Draws a diagonal line according to the parameter.
 *
 * @n: The number of times to draw the diagonal line.
 *
 * Return: empty
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

