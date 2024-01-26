#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - printing stringd
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
	putchar(*s);
	_puts_recursion(s + 1);
	}
}
