#include "main.h"
/**
 * reverse_array - function to reverse an array
 * @a: integer
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < (n / 2); i++)
	{
		x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
}
