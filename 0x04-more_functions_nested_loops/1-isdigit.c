#include "main.h"

/**
 * _isdigit - Check if it's a digit.
 * @a: The character to check.
 *
 * Return: 1 if it's a digit, 0 otherwise.
 */
int _isdigit(int a)
{
	if (a >= '0' && a <= '9')
	{
		return (1);
	}
	return (0);
}
