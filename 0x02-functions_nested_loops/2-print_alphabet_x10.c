#include "main.h"

/**
  * print_alphabet_x10 - Prints the lowercase ten times.
  *
  * Return: nothing to the stdout.
  */

void print_alphabet_x10(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
