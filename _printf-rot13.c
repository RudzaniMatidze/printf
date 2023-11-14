#include "main.h"
/**
 * print_rot13 - printf string to rot13
 * @argmnt: argument string
 * Return: number
 */
int print_rot13(va_list argmnt)
{
	int a, b, number = 0;
	int k = 0;
	char *s = va_arg(argmnt, char*);
	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M'};
	char beta[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z'};

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
