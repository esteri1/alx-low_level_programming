#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text according number
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if (n > 5 )
	{
		printf("greater than 5");
	}
	if ( n == o)
	{
		printf("0");
	}
	if (n < 6 && n != 0)
	{
		printf("Less than 6 not 0");
	}
	printf("\n");
	return (0);
}
