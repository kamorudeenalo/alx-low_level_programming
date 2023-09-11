#include <stdio.h>

/**
 * main - Write a program that prints lowercase alphabet.
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int myLowercase;

	for (myLowercase = 97; myLowercase <= 122; myLowercase++)
	{
		if (myLowercase == 101 || myLowercase == 113)
		{
			continue;
		}
		putchar(myLowercase);
	}

	putchar('\n');

	return (0);
}
