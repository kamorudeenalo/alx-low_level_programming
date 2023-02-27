#include "main.h"

/**
 * _strlen -> function to get the length of a string
 * @s: string pointer to passed to this function
 * Return: returns length of the string
 */
int _strlen(char *s)
{
int len = 0;

if (s)
{
while (*(s + len))
++len;
}
return (len);
}
