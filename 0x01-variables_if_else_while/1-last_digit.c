#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Print the last digit of a randomly generated number and whether it is
 * greater than 5, less than 6 or 0
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, n % 10);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is less than  6 and not 8\n",
				n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %D and is 0\n",
				n, n % 10);
	}
	return (0);
}
