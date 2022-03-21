#include "main.h"

/**
 * _puts(char *str) - prints a string, followed by a new line, to stdout.
 * @str: is the char input.
 * Return: (0).
 */
void _puts(char *str)
{
	int string = 0;

	while (string >=0)
	{
		if (str[string] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[string]);
		string++;
	}
}
