#include "main.h"
/**
 *
 * _isalpha - prints 1 if an input is a letter, 0 if otherwise.
 *
 * @c: The character in ASCII code
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
