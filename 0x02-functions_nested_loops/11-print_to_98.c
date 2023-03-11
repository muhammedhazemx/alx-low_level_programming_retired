#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			if (n <= -100)
			{
				_putchar('-');
				_putchar(n /100 + '0');
				_putchar((n / 10) % 10 + '0');
				_putchar(n % 10 + '0');
			}
			else if (n <= -10)
			{
				_putchar('-');
				_putchar(n / -10 + '0');
				_putchar(n % 10 * -1 + '0');
			}
			else if (n < 0)
			{
				_putchar('-');
				_putchar(n / -10 + '0');
				_putchar(n % 10 * -1 + '0');
			}
			else if (n == 0)
			{
				_putchar('0');
			}
			else if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			if (n >= 100)
			{
				_putchar(n /100 + '0');
				_putchar((n / 10) % 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(n /10 + '0');
				_putchar(n % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}