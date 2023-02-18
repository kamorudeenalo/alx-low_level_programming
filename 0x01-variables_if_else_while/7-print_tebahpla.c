#include <stdio.h>

/**
 * main - Print the alphabets in reverse case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int myAlphabet;

	for (myAlphabet = 'z'; myAlphabet >= 'a'; myAlphabet--)
		putchar(myAlphabet);
	putchar('\n');

	return (0);
}
