#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is ", n);
	i = n % 10;
	if (i > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", n, i);
	}
	return (0);
}
