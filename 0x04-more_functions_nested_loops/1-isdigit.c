#include "main.h"

/**
 * _isdigit - checks for a digit from 0 up to 9
 *
 * @c : int to be checked against 0-9
 *
 * description: checks if int c is a digit from 0-9
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
