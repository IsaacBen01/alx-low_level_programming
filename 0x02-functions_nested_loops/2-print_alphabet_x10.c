#include "main.h"

/**
 * void print_alphabet_x10(void) - Print alphabet in lowercase x10
 *
 * Description: Program that print alphabet x10
 * Return: Always 0
 */

void print_alphabet_x10()
{
	int n = 0;
	char j;

	while (n <= 9)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			++j;
		}
		_putchar('\n');
		++n;
	}
	_putchar('\n');
}

