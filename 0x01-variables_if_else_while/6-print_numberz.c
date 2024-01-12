#include <stdio.h>
/**
 * main - Entry point
 * program to print base 10 nimbers
 *
 * Return: value is 0
 */
int main(void)
{
	int x = 0;
	
	while (x < 10)
	{
		putchar('0' + x);
		x++;
	}
	putchar('\n');
	return (0);
}
