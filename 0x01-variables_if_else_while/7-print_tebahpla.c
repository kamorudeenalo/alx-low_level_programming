#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int myLowercase;

	for (myLowercase = 122; myLowercase >= 97; myLowercase--)
	{
		putchar(myLowercase);
	}

	putchar('\n');

	return (0);
}
