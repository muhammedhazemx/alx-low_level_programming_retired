#include "main.h"

/**
* print_numbers - prints from 0 to 9 and a new line
*
* description: prints from 0 to 9 and a new line
*
* Return: void
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}