#include "main.h"
/**
 * print_integer - prints an integer
 * @args: prints argument
 * Return: num of char printed
 */
int print_integer(va_list args)
{
	int a = va_arg(args, int);
	int number, last_num = a % 10, symb, ex = 1;
	int i;

	a = a / 10;
	number = a;

	if (last_num < 0)
	{
		_putchar('-');
		number = -number;
		a = -a;
		last_num = -last_num;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			ex = ex * 10;
			number = number / 10; }
		number = a;
		while (ex > 0)
		{
			symb = number / ex;
			_putchar(symb + '0');
			number = number - (symb * ex);
			ex = ex / 10;
			i++;
		}
	}
	_putchar(last_num + '0');
	return (i);
}

/**
 * print_decimal - prints a decimal
 * @args: prints argument
 * Return: num of char printed
 */
int print_decimal(va_list args)
{
	int a = va_arg(args, int);
	int number, last_num = a % 10, symb, ex = 1;
	int d;

	a = a / 10;
	number = a;

	if (last_num < 0)
	{
		_putchar('-');
		number = -number;
		a = -a;
		last_num = -last_num;
		d++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			ex = ex * 10;
			number = number / 10; }
		number = a;
		while (ex > 0)
		{
			symb = number / ex;
			_putchar(symb + '0');
			number = number - (symb * ex);
			ex = ex / 10;
			d++;
		}
	}
	_putchar(last_num + '0');
	return (d);
}
