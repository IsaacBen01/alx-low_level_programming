#include "main.h"

/**
 * int _isdigit(int c) - checks for a digit
 * @c: is the int to be checked
 * Return: return 1 if a digit amd 0 if otherwise
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
