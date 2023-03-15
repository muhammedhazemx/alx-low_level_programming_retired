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
	char i = 0;	

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}

int main(void)
{
    print_numbers();
    return (0);
}