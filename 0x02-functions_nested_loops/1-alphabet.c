#include "main.h"

/**
 * main - Function that prints alphabets in lowercases
 *
 * Description: Uses the holberton header file, that brings in the _putchar
 * function.
 * Return: (0)
 */

void print_alphabet(void)
{
	char j;

	j = 'a';

	while (j <= 'z')
	{
		_putchar(j);
		++j;
	}
	_putchar('\n');
}
