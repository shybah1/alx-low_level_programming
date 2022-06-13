#include "main.h"
/**
 * _strlen - returns the lenth of a string.
 * @s: input string.
 * Return: lengh of a string.
 */
int _strlen(char *s)
{
	int count = 0;
	
	while (*(s + count) != '\0')
		count++;
	return (count);
}
