#include "main.h"

/**
 * more_numbers - prints 10 lines of nums 0-14
 *
 * description: prints 10 lines of nums 0-14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0, j = 0;

	while (i <= 9)
	{
		while (j <= 14)
		{
			if (j <= 9)
			{
				_putchar(j + '0');
			}
			else if (j >= 10)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
	}
}
