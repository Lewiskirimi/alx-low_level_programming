#include <stdio.h>
/**
 * main - Entry point
 * program to print two digits separately
 *
 * Return: always 0
 */
int main(void)
{
	for (int x = 0; x < 9; x++)
	{
		for (int y = (x + 1); y < 10; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			if ((x == 8) && (y == 9))
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
