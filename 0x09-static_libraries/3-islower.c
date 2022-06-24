#include "main.h"
/**
 * _islower - prints 1 if an input is a lowercase character and 0 if otherwise.
 *
 * @c: The character in ASCII code.
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
