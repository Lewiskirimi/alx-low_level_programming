#include "main.h"
/**
 * print_alphabet_x10 - creates alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int x;

	for (x = 1; x <= 10; x++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
