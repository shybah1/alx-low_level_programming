#include "main.h"
/**
 * print_alphabet_x10 - print the alphabets 10 time
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}

	_put_char('\n');
	}
}
