#include <stdio.h>
/**
 * main - entry point
 * program to print _putchar
 *
 * Return: always 0
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
