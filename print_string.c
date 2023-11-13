#include "main.h"
/**
 * print_string - Prints a string
 * @args: argument
 * Return: the lenght of the string
 */
int print_string(va_list args)
{
	char *string;
	int a;
	int length;

	string = va_arg(args, char *);
	if (string == NULL)
	{
		string = "(null)";
		length = _strlen(string);
		for (a = 0; a < length; a++)
			_putchar(string[a]);
		return (length);
	}
	else
	{
		length = _strlen(string);
		for (a = 0; a < length; a++)
			_putchar(string[a]);
		return (lenght);
	}
}
