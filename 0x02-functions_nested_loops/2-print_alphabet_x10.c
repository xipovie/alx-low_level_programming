#include "main.h"
/**
 * main - Entry point
 * Description: 'prints alphabets 10 times'
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; i <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

