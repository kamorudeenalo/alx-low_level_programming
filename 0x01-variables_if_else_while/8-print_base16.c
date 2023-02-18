#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int myAlpha, myNum;

	for (myNum = 0; myNum < 10; myNum++)
		putchar('0' + myNum);
	for (myAlpha = 'a'; myAlpha <= 'f'; myAlpha++)
		putchar(myAlpha);

	putchar('\n');

	return (0);
}
