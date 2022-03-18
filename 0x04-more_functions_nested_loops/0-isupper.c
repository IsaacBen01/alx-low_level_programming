#include "main.h"
#include <stdio.h>

/**
 * int _isupper(int c) - checks for upper character
 * @c: is the int to be checked if upper or lower character
 * Returns: returns 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
