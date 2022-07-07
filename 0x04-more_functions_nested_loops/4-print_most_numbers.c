#include "main.h"

/**
 * print_most_numbers -  checks for checks for a digit (0 through 9).
 *
 * Description: Prints the numbers excluding 2 and 4
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
			_putchar(x + '0');
		}
	}

	_putchar('\n');
}
