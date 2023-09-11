#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int base10;

	for (base10 = 0; base10 < 10; base10++)
	{
		putchar('0' + base10);
	}

	putchar('\n');

	return (0);
}
