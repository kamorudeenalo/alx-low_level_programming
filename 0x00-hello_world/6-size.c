#include <stdio.h>

/**
 * main - Print sizeof
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %c byte(s)\n, sizeof(a)");
	printf("Size of int: %d byte(s)\n, sizeof(b)");
	printf("Size of long int: %ld byte(s)\n, sizeof(c)");
	printf("Size of long long int: %lld byte(s)\n, sizeof(d)");
	printf("Size of float: %f bhte(s)\n, sizeof(f)");

	return (0);
}
