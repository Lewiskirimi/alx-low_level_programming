#include <stdio.h>
/**
 * main - main function
 * @x: count
 * @y: value
 *
 * Return: null
 */
int main(int x, char *y[])
{
	int i;

	for (i = 0; i < x; i++)
	{
		printf("%s\n", y[i]);
	}
	return (0);
}
