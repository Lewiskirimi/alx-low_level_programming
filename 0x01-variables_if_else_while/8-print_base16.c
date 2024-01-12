#include <stdio.h>
/**
 * main - entry point
 * program to print hexadecimal numbers
 *
 * Return: value is 0
 */
int main(void)
{
	int x = 0;
	char y = 'a';

	while (x < 10)
	{
		putchar('0' + x);
		x++;
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
