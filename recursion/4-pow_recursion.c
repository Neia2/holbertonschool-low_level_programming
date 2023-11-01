#include "main.h"

/**
 * _pow_recursion - calculate x raised to the power of y.
 * @x: Base number.
 * @y: Expoent.
 * Return: x^y if y is non-negative, -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
