#include "main.h"
/**
 * factorial - function name
 * @n: integer
 *
 * Return: returns as stated below
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if(n < 0)
	{
		return (-1);
	}
	return (n = n * factorial(n - 1));
}
