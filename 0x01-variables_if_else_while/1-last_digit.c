#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints random numbers and check if greater than 5,less than 6 or is 0
  *
  *Return: 0 (Success)
  */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d ", n);

	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("is %d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("is %d and is less than 6 and not 0\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("is %d and is 0\n", lastDigit);
	}

	return (0);
}
