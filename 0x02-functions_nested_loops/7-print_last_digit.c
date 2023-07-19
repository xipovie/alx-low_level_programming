#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: input number as an integer.
 *
 * Return: Last digit as an integer.
 */
int print_last_digit(int n)
{
    int l = n % 10;

    if (l < 0)
    {
        l = -l;
    }

    _putchar(l + '0');
    return (l);
}

