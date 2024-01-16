#include <stdio.h>
/**
 * main - entry point
 * progran to print alphabet in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
