#include <stdarg.h>

/**
 * sum_all_numbers - Returns the sum of all its parameters.
 * @num_count: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If num_count == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_all_numbers(const unsigned int num_count, ...)
{
	va_list args;
	unsigned int index;
	int sum = 0;

	va_start(args, num_count);

	for (index = 0; index < num_count; index++)
		sum += va_arg(args, int);

	va_end(args);

	return sum;
}
