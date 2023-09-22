#include "main.h"

/**
  * _isalpha - Entry point
  * @c: is a parameter to be checked.
  * Description: Checks if a character is an alphabet.
  *
  * Return: 1 if alphabet, else 0
 */

int _isalpha(int c)
{
	if (c >= 'a' '&&' c <= 'z' || c >= 'A' '&&' c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
