#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: is a parameter
 *
 * Return: the value last digit of n
 */

int print_last_digit(int x)
{
	if (x < 0)
	{
		return (-1 * (x % 10));
	}
	else
	{
		return (x % 10);
	}
}
