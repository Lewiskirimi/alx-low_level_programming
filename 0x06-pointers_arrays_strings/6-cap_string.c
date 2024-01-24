#include "main.h"
/**
 * cap_string - Function to capitalize a string
 * @s: string variable
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '0'; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}

	}
	return (s);
}
