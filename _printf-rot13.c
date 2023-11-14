#include "main.h"
/**
 * _print_rot13 - printf string to rot13
 * @argmnt: argument string
 * Return: number
 *
 */
int _print_rot13(va_list argmnt)
{
	int a, b, number = 0;
	int k = 0;
	char *s = va_arg(argmnt, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a]; a++)
	{
		k = 0;
		for (b = 0; alpha[b] && !k; b++)
		{
			if (s[a] == alpha[b])
			{
				_ptchr(beta[b]);
				number++;
				k = 1;
			}
		}
		if (!k)
		{
			_ptchr(s[a]);
			number++;
		}
	}
	return (number);
}
