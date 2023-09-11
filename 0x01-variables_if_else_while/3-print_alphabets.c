#include <stdio.h>

/**
 * main - Write a program that prints lower and upper case alphabet.
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int myLowercase;
	int myUppercase;
	    
	for (myLowercase = 97; myLowercase <= 122; myLowercase++)
	{
		putchar(myLowercase);
	}

	for (myUppercase = 65; myUppercase <= 90; myUppercase++)
	{
		putchar(myUppercase);
	}
	putchar('\n');

	return (0);
}
