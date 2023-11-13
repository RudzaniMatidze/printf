#include "main.h"
/**
 * _strlen - returns len of a string
 * @str: pointer string
 * Return: integer
 */
int _strlen(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
		return (a);
}

/**
 * _strlen_c - applied for constant char pointer
 * @str: character pointer
 * Return: a
 */
int _strlen_c(const char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}
