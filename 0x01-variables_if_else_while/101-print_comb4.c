#include <stdio.h>
/**
 * main - Entry point
 * program to print 3 digits separately
 *
 * Return: always 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 8; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');
				if ((x == 7) && (y == 8) && (z == 9))
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
