#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Check inputs of function
 * Return: 1 for lowercase character or 0 for anything else
*/

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
