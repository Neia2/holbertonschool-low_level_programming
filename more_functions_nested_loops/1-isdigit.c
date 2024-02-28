#include "main.h"

/**
*_isupper: checks for a digit (0 through 9).
*@c: the character to be checked.
* Returns: 1 if c is a digit, otherwise 0.
*/
int _isdigit(int c)
{

if (c >= 49 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
