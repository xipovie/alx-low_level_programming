#include "main.h"

/**
 * more_numbers - Print 10 times the numbers since 0 up to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int X, y;

	for (X = 0; X < 10; X++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}

