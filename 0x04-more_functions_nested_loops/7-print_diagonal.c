#include "main.h"

/**
 * print_diagonal - prints a digonal line in the termninal
 *
 * @n : num of times ('\') is printed
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}

	else
	{
		_putchar('\n');
	}
}
