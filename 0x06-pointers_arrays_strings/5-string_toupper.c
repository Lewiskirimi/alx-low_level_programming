#include "main.h"
/**
 * string_toupper - function to convert lowercase string to uppercase
 * @s: string
 *
 * Return: nothing
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
	}
	return (0);
}
