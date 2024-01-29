#include "main.h"
/**
 * prime1 - function test
 * @x: int test
 * @y: int test
 *
 * Return: call
 */
int prime1(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (prime1(x, y + 1));
}
/**
 * is_prime_number - function to find prime numbers
 * @n : int
 *
 * Return: prime no
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime1(n, 2));
}
