#include "main.h"

/**
 * print_times_table - print the times table of a given number
 *
 * @n: the number to print the times table of
 */

void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			product = i * j;

			if (product < 10)
			{
				_putchar (product + '0');
			}
			else if (product < 100)
			{
				_putchar (product / 10 + '0');
				_putchar (product % 10 + '0');
			}
			else
			{
				_putchar (product / 100 + '0');
				_putchar ((product /10) % 10 + '0');
				_putchar (product % 10 + '0');
			}
		}
	}
}