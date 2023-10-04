#include "main.h"

/**
 * print_last_digit - prints last digit
 * @x: is a parameter
 *
 * Return: the value last digit of n
 */

int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		y = -1 * (x % 10);
		_putchar(y + '0');

		return (y);
	}
	else
	{
		y = x % 10;
		_putchar(y + '0');

		return (y);
	}
}
