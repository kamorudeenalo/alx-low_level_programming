#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * seperated by comma and space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int myNum;

	for (myNum = 0; myNum < 10; myNum++)
	{
		putchar('0' + myNum);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
