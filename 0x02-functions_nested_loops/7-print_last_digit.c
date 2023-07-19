#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: input number as an integer.
 *
 * Return: Last digit.
 */
int print_last_digit(int n)
{
    int l = n % 10;

    if (l < 0)
    {
        l = -l;
        _putchar(l + 48);
        return (l);
    }
    else
    {
        _putchar(l + 48);
        return (l);
    }
}
