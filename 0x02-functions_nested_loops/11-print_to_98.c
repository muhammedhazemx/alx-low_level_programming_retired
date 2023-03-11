#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */

void print_to_98(int n)
{
	if(n < 98)
	{
		for(; n < 98; n++)
		{
			if (n == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else if (n > 0 || n <= 9)
			{
				_putchar(' ');
				_putchar(n + '0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar(',');
			}
			
		}
	}
}