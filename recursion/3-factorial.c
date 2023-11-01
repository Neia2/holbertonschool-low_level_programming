#include "main.h"

/**
 * factorial: returns the factorial of a given number.
 * @n: The number for which the factorial its to be computed.
 * Return: -1 If n is less than 0, otherwise the factorial of n.
 */
 int factorial(int n)
{	
		if (n < 0)
		{
		return (- 1);
		}

		else if (n == 0)
		{
		return (1);
		}

		else
		{
		return n * factorial (n - 1);
		}
}
