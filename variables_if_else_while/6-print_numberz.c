#include <stdio.h>

/**
*main - prints all single digit numbers from 0
*Return: this returns 0
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
