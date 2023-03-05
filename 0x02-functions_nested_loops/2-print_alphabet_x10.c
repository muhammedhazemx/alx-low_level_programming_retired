#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet, in lowercase, followed by a new line
 * 
 * description: uses _putchar to print the alphabet
 * 
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	
	char c = 'a';
	int i = 0; 

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
	
}