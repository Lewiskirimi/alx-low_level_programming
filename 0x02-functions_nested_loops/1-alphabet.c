#include "main.h"
/**
 * main - entry point
 *
 * Description: Function print to print alphabet in lowercase
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
