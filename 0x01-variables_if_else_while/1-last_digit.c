#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int y;

	y = n % 10;

	if (y > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	}
	else if (y < 6 && y != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, y);
	}
	else
	{
		printf("Last digit of %d is %d and is zero\n", n, y);
	}

	return (0);
}
