#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * More headers goes there
 * main - Entry point
 * betty style doc for function main goes there
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	/* that's the code! */
	return (0);
}
