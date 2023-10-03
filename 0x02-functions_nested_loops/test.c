#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, a;

	printf("Input a negative number\n");
	scanf("%d", &num);

	a = abs(num);

	printf("The absolute value of %d is %d\n", num, a);

	return(0);
}
