#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long x, maxf;
	long number = 612852475143;
	double square = 1.0;

	for (x = 2; square <= number; x++)
	{
		if (number % x == 0)
		{
			maxf = x;
			number = number / x;
			square = x;
			x = 1;
		}
	}

	printf("%ld\n", maxf);
	return (0);
}

