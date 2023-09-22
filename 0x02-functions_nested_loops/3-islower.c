#include "main.h"

/**
  * _islower - entry point
  *@c: is a parameter.
  * Description: A function that checks for lowercase.
  *
  * Return: returns 1 if c is lowercase, else return 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
