#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints an integer
 * @name: char pointer
 * @f: Function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)

	f(name);
}
