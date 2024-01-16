#include "math.h"
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
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
