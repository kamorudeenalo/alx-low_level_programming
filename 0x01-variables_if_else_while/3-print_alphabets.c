#include <stdio.h>

/**
 * main - Print the alphabet using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lowerAlphabet, upperAlphabet;

	for (lowerAlphabet = 'a'; lowerAlphabet <= 'z'; lowerAlphabet++)
		putchar(lowerAlphabet);
	for (upperAlphabet = 'A'; upperAlphabet <= 'Z'; upperAlphabet++)
		putchar(upperAlphabet);

	putchar('\n');

	return (0);
}
