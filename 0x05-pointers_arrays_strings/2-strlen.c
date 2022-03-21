#include "main.h"

/**
 * int _strlen(char *s).
 * @*s: is the input.
 * Return: returns the length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
