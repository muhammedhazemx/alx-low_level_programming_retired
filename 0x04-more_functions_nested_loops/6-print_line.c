#include "main.h"

/**
 * print_line - draw st lint in terminal window
 *
 * @n: num of times that _ is printed
 *
 * Return: void
*/

void print_line(int n)
{
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
