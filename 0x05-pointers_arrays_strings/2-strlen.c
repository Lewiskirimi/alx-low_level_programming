#include "main.h"
/**
 * _strlen - function name
 * @s: character
 */
int _strlen(char *s)
{
	int x, y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		y++;
	}
	return(y);
}
