#include "main.h"

/**
 * times_table - prints the 9 times tables, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int row, col, product;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			product = row * col;
			if (col == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
				/**
				 * we add '0 as it's the value is 48 in
				 * Decimal so 48 + 1 = 49 which is
				 *the value of 1 in ASCII etc..
				 */
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0'); /* we / by 10 to get the 1st digit*/
				_putchar(product % 10 + '0'); /* we use the % to get the 2nd digit*/
			}
		}
		_putchar('\n');
	}
}
