#include "main.h"
/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
