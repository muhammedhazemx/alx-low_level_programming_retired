#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * 
 * Return: 0
 */

int main(void)
{
	int count;
	long int fib1 = 0, fib2 = 1, sum;
	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf ("%ld", sum);
		fib1 = fib2;
		fib2 = sum;
		if (count < 49)
		{
			printf(", ");
		}
		else 
		{
			printf("\n");
		}
	}
	return (0);
}