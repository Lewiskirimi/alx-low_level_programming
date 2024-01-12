#include <stdio.h>
/**
 * main - entry point
 * program to print lowercase alphabet in reverse
 *
 * Return: alway 0
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
