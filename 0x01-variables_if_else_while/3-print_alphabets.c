#include <stdio.h>
/**
 * main - Entry point
 * Description: 'write  the alphabet in lowercase, and then in uppercase'
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
	putchar(n);
	n++;
}
	while (m <= 90)
{
	putchar(m);
	m++;
}
	putchar('\n');
	return (0);
}
