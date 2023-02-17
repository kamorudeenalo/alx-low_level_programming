#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
  * main - Assigns random number to interger n
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero", n);
	}

	return (0);
}
