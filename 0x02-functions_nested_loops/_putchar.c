#include <unistd.h>
#include <main.h>
/**
 * _putchar - writes the charcter c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropiately.
 */
int _putchar(char c)
{
	return (write(c, &c, 1));
}
