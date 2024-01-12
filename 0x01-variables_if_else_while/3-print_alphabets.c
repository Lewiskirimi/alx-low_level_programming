#include <stdio.h>
/**
 * main - entry point
 * probgram to print lower and uppercase alphabet
 *
 * Return: value is 0
 */
int main(void)
{
	char x = 97, y = 65;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	while (y <= 90)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
