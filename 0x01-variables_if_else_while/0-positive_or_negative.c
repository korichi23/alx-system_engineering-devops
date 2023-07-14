#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Descreption: tell n if it is  negative ,positive or zero
 * Return: always 0 for successful excution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
