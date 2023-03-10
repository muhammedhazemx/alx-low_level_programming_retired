#include "main.h"

/**
 * print_to_98 - prints all n to 98
 *
 * @n: starting number
 *
 * Return: void
*/

void print_to_98(int n)
{
	for (n; n < 98; n++)
	{
		if (n == 0)
		{
			_putchar('0');
			_putchar(',');
		}
		else if (n > 0 && n < 10)
		{
			_putchar(' ');
			_putchar(n + '0');
			_putchar(',');
		}
		else
		{
			_putchar(' ');
			_putchar(n / 10 + '0');
			_putchar (n % 10 + '0');
		}


	}

}

