#include "main.h"

/**
 * print_integers - prints an integer
 * @args: prints argument
 * Return: num of char printed
 */
int print_integers(va_list args)
{
	int a = va_arg(args, int);
	int number, last_num = a % 10, symb, ex = 1;
	int printed_chars = 0;

	a = a / 10;
	number = a;

	if (last_num < 0)
	{
		_ptchr('-');
		number = -number;
		a = -a;
		last_num = -last_num;
		printed_chars++;
	}

	if (number > 0)
	{
		while (number / 10 != 0)
		{
			ex = ex * 10;
			number = number / 10;
		}
		number = a;
		while (ex > 0)
		{
			symb = number / ex;
			_ptchr(symb + '0');
			number = number - (symb * ex);
			ex = ex / 10;
			printed_chars++;
		}
	}
	_ptchr(last_num + '0');
	return (printed_chars);
}

/**
 * print_decimals - prints a decimal
 * @args: prints argument
 * Return: num of char printed
 */
int print_decimals(va_list args)
{
	int a = va_arg(args, int);
	int number, last_num = a % 10, symb, ex = 1;
	int printed_chars = 0;

	a = a / 10;
	number = a;

	if (last_num < 0)
	{
		_ptchr('-');
		number = -number;
		a = -a;
		last_num = -last_num;
		printed_chars++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			ex = ex * 10;
			number = number / 10;
		}
		number = a;
		while (ex > 0)
		{
			symb = number / ex;
			_ptchr(symb + '0');
			number = number - (symb * ex);
			ex = ex / 10;
			printed_chars++;
		}
	}
	_ptchr(last_num + '0');
	return (printed_chars);
}
