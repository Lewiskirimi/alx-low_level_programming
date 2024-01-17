#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @x: integer
 *
 * Return: value is x || y
 */
int print_last_digit(int x)
{
	if (x < 0)
	{
		int y;

		y = x * (-1);
		_putchar((y % 10) + '0');
		return (y % 10);
	}
	_putchar((x % 10) + '0');
	return (x % 10);
}
