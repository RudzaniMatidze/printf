#include "main.h"

/**
 * _putss - prints a string
 * @s: input a string
 * Return: num of byte
 */
int _putss(char *s)
{
	int cnt = 0;

	if (s)
	{
		for (cnt = 0; s[cnt] != '\0'; cnt++)
		{
			_ptchr(s[cnt]);
		}
	}
	return (cnt);
}
