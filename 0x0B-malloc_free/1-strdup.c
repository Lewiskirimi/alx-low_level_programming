#include "main.h"
/**
 * _strdup - function to duplicate strings
 * @str: char
 *
 * Return: as specified
 */
char *_strdup(char *str)
{
	char *copy;
	int count;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	copy = malloc(sizeof(char) * count + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	return (copy);
}
