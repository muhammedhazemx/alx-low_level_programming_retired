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
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar('1');
				k = j % 10;
			}
			_putchar(k + '0');
		}
			_putchar('\n');
	}

}
