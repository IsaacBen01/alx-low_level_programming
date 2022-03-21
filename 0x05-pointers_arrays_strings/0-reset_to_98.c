#include "main.h"
#include <stdio.h>

/**
 * void reset_to_98(int *n) - reset value to 98
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
int j;

j = 20;
n = &j;

*n = 98;
}
