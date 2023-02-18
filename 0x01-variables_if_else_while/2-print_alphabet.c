#include <stdio.h>

/**
 * main - Print the alphabet using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int myAlphabet;

	for (myAlphabet = 'a'; myAlphabet <= 'z'; myAlphabet++)
		putchar(myAlphabet);
	putchar('\n');

	return (0);
}
