#include "main.h"
/**
 * print_sign - determines if the input n is less than, greater than or equal
 * to zero.
 *
 * @n:The input as integer.
 *
 * Return: Always 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('43');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('45');
		return (-1);
	}
	else
	{
		_putchar('48');
		return (0);
	}
	_putchar('\n');
}
