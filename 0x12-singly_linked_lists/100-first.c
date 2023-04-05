#include <stdio.h>

void before(void) __attribute__((constructor));

/**
 * before - Prints a message before main function is executed
 */
void before(void)
{
	static int i;

	++i;
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");

	if (i == 1)
	{
		printf("I repeat, ");
	}
}
