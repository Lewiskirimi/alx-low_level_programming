#include "main.h"
/**
 * swap_int - program function
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
