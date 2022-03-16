#include "main.h"

/**
 * main - A program that prints _putchar
 *
 * Return: (0)
 */

int main(void)
{
	char str[] = "_putchar";
	int i;
	
	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');

	return (0);
}
