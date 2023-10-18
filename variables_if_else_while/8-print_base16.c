#include <stdio.h>

/**
*main - prints all the numbers of base 16 in lowercase
*Return: this returns 0
*/

int main(void)
{
	int i;
	int x;
		for (i = '0'; i <= '9' ; i++)
		{
			putchar(i);
		}
		for (x = 'a' ; x <= 'f' ; x++)
		{
			putchar(x);
		}
		putchar ('\n');

	return (0);
}
