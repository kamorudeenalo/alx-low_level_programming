#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int myNum;

	for (myNum = 0; myNum <= 9; myNum++)
	{
		putchar('0' + myNum);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
