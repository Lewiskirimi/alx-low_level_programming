#include <stdio.h>
/**
 * main - entry point
 * printing numbers separated by commas and space
 *
 * Return: value is 0
 */
int main(void)
{
	int x = 0;
	char a = 36, y = 44, z = 32;

	while (x < 10)
	{
		putchar('0' + x);
		if (x < 9)
		{
			putchar(y);
			putchar(z);
		}
		x++;
	}
	putchar(a);
	return (0);
}
