#include "main.h"
#include <stdio.h>
/**
 * times_table - 9 times table
 *
 * Return: voi
 */
void times_table(void)
{
	int x, y, results;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			results = x * y;
			if (y == 0)
			{
			printf("%d, ", results);
			}
			else
			{
				printf("%2d", results);
				if (y != 9)
				{
					printf(", ");
				}
			}
		}
		printf("\n");
	}
}
