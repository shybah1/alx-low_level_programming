#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array containing the index program command line arguments.
 * Return: 0 success.
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);
	return (0);
}
