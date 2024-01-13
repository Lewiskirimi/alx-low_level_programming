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

	while (x < 10)
	{
		putchar('0' + x);
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
