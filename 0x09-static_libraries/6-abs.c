#include "main.h"
/**
 * _abs - checking absolute value
 * @r: integer
 *
 * Return: return ii x or r;
 */
int _abs(int r)
{
	if (r < 0)
	{
		int x;

		x = r * (-1);
		return (x);
	}
	return (r);
}
