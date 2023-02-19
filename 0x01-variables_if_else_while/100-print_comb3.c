#include <stdio.h>

/**
  * main - Print two digits seperated by comma and space to the std. output
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	for (i = 1; i <= 89; i++)
	{
		if (i == 10 || i == 11)
		{
			continue;
		}

		putchar((i / 10) + '0');
		putchar((i % 10) + '0');

		if (i != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
