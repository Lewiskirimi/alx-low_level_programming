#include "main.h"
/**
 * _islower - checks lower case
 * Description:'c' is the called function
 * @c: integer
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
