#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _puts - writes a string to the standard output
 * @string: The string to be printed
 * Return: The number of characters printed (excluding null byte)
 */
int _puts(char *string)
{
	int c = 0;

	while (*string)
	{
		count += _putchar(*string);
		string++;
	}
	return (c);
}
