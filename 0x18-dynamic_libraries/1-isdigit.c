#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: input digit
 * Return: 1 if digit is between (0 to 9), 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
