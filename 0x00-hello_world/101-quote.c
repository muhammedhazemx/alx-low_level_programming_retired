#include <stdio.h>

/**
 * main - prints a string
 *
 * Description: Prints the string "and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Return: Always 1 (Success)
 */

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	fprintf(stderr, "%s", s);

	return (1);
}
