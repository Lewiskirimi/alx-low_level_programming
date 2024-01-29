#include "main.h"
/**
 * sqrt2 - function testt
 * @x: int test
 * @y: int test
 * Return: square root of a number
 */
int sqrt2(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrt2(x, y + 1));
}

/**
 * _sqrt_recursion - function name
 * @n: integer
 *
 * Return: square root of a numbe
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
