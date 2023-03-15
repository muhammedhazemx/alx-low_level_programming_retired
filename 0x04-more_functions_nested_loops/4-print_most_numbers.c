#include "main.h"

/**
 * print_most numbers - prints 0 - 9 excecpt 2,4
 * 
 * description: prints.
 * 
 * Return: void 
*/

void print_most_numbers(void)
{
	int i; 
	while (i < 10)
	{
		if (i != 2 || i != 4)
		{
			i++;
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}