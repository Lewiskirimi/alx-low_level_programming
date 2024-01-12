#include <stdio.h>
/**
 * main - entry point
 * program to print lowercase alphabet without e and q
 *
 * Return: value is 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if ((x != 'q') && (x != 'e'))
		{
		putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
