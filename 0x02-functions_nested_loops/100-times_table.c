#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				x = i * j;
				if (j == 0)
				{
					printf("%3d, ", x);
				}
				else
				{
					printf("%3d", x);
					if (j != n)
					{
						printf(", ");
					}
				}
			}
			printf("\n");
		}
}	}
