#include "main.h"
/**
 * _strncat - function name
 * @dest: string
 * @src: string
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; i < n && src[j] != '\0'; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
