#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase.
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
    int i;

    for (i = 97; i <= 122; i++)
    {
        _putchar(i);
    }

    _putchar('\n');

    return (0);
}

