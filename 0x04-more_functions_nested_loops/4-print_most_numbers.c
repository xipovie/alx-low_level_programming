#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 up to 9 excluding 2 and 4.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
			continue;
		_putchar(x + '0');
	}
	_putchar('\n');
}

int main(void)
{
	print_most_numbers();
	return (0);
}
