#include <stdlib.h>
#include <time.h>
/**
 * More headers goes there
 * main - Entry point
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* that's the code! */
	return (0);
}
