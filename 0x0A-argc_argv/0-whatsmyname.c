#include <stdio.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument valu
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
