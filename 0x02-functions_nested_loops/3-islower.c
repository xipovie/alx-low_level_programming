#include "main.h"
/**
 * main - Entry point
 * Description: 'show 1 if input is a lowercase character. if not show 0'
 * @c: The characters in ASCII code
 * Return: 1 for lowercase character. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
