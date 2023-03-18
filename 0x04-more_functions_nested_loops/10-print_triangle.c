#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: size of the triangle
 *
 * Return: void
*/

void print_triangle(int size)
{
	int col, row, space;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (space = size - row; space > 1; space--)
			{
				_putchar(' ');
			}
			for (col = 0; col <= row; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
