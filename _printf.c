#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: Specified format
 * Return: num of char printed
 */
int _printf(const char *format, ...)
{
	unsigned int a, str_cnt, cnt = 0;

	va_list argmnt;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(argmnt, format);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			_ptchr(format[a]);
		}
		else if (format[a + 1] == 'c')
		{
			_ptchr(va_arg(argmnt, int));
			a++;
		}
		else if (format[a + 1] == 's')
		{
			str_cnt = _putss(va_arg(argmnt, char *));
			a++;
			cnt += (str_cnt - 1);
		}
		else if (format[a + 1] == '%')
		{
			_ptchr('%');
			a++;
		}
		cnt += 1;
	}
	va_end(argmnt);
	return (cnt);
}
