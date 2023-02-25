#include <stdio.h>
/**
 * main - Entry point
 *
 * description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar (number + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar (letter);
	}
	putchar('\n');
	return (0);
}
