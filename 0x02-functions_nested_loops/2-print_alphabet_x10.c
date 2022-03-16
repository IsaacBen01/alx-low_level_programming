#include "main.h"

/**
 * void print_alphabet_x10(void) - Print alphabet in lowercase x10
 *
 * Description: Program that print alphabet x10
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
char ch;
int num;

for (num = 0; num < 10; ++num)
{
for (ch = 'a'; ch <= 'z'; ++ch)
{
_putchar(ch);
}
_putchar('\n');
}
}
