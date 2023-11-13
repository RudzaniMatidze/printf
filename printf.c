#include “main.h”
#include <stdarg.h>

/**
 * _printf - Prints custom string
 * @format: String format
 * @...: Variable num of arguments
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list arg_list;
	int cnt = 0;

	va_start(arg_list, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					cnt += _putchar(va_arg(arg_list, int));
					break;
				case 's':
					cnt += _puts(va_arg(arg_list, char *));
					break;
				case '%':
					cnt += _putchar('%');
					break;
				default:
					_putchar('%');
					_putchar(*format);
					cnt += 2;
			}
		}
		else
		{
			cnt += _putchar(*format);
		}

		format++;
	}

	va_end(arg_list);

	return (cnt);
}
