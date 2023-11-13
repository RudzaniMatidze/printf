#include "main.h"
/**
 * printf_char - function that prints a char.
 * @args: argumnent
 * Return: 1
 */
int printf_char(va_list num)
{
	char string;

	string = va_arg(args, int);
	_putchar(string);
	return (1);
}
