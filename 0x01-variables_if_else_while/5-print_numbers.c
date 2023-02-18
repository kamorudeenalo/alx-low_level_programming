#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int myNum;

	for (myNum = 0; myNum < 10; myNum++)
		printf("%d", myNum);
	putchar('\n');

	return (0);
}
