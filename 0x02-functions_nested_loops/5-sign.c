#include "main.h"

/**
 * print_sign - Determines if the input number is greater, equal, or less than zero.
 * @n: The input number as an integer.
 *
 * Return: 1 if the number is greater than zero, 0 if it is zero, and -1 if it is less than zero.
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar(43); /* '+' */
        return (1);
    }
    else if (n == 0)
    {
        _putchar(48); /* '0' */
        return (0);
    }
    else
    {
        _putchar(45); /* '-' */
        return (-1);
    }

    _putchar('\n');
}

