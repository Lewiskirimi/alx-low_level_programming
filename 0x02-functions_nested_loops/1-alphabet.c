#include "main.h"
/**
 * main - entry point
 * progran to print alphabet in lowercase
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
