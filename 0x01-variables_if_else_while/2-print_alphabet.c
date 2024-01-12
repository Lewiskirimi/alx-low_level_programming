#include <stdio.h>
/**
 * main - Entry point
 * program to print alphabets
 *
 * Return: value 0
*/
int main(void)
{
	char x = 97;
	while (x <= 122)

	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
