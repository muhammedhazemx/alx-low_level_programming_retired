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
	int row = 0;
	int col= 0;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (col = 0; col < row; col++)
			{
				_putchar(' ');
			}
		}
		_putchar(' ');
	}
	else
	{
		_putchar('\n');
	}
}