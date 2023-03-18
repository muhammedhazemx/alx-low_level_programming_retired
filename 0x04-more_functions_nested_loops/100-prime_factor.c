#include <stdio.h>

/**
 * main - print the largest prime factor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long int num = 612852475143;
	long div = 2;
	long maxPrime = 0;

	for (; div <= num; div++)
	{
		if (num % div == 0)
		{
			maxPrime = div;
			num = num / div;
			div = 1;
		}
	}
	printf("%ld is the largest prime factor of 612852475143 \n", maxPrime);
	return (0);
}
