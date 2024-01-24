#include "main.h"
/**
 * _strncpy - function name
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; n > i; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
