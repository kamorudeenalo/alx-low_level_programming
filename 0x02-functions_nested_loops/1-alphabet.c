#include "main.h"

/**
 * print_alphabet - Print lower case.
 *
 * Description: prints lowercase when called.
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
