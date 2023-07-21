#include "main.h"
/**
 * int _isdigit - check if it's a digit
 * @a: the num to check
 * Return: 1 for a character that will be a digit or 0 for any else
 */
int _isdigit(int a)
{
	if (a >= 40 && a <= 57)
	{
		return (1);
	}
	return (0);
}
