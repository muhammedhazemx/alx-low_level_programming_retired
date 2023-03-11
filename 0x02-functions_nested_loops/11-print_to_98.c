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
			if (n < 0)
			{
				_putchar('-');
				n *= -1; /* Convert n to positive */
			}
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				print_to_98(n / 10); /* Recursively print the tens digit */
				print_to_98(n % 10); /* Recursively print the ones digit */
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			if (n < 0)
			{
				_putchar('-');
				n *= -1; /* Convert n to positive */
			}
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				print_to_98(n / 10); /* Recursively print the tens digit */
				print_to_98(n % 10); /* Recursively print the ones digit */
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		print_to_98(n / 10); /* Recursively print the tens digit */
		print_to_98(n % 10); /* Recursively print the ones digit */
	}
	_putchar('\n');
}
