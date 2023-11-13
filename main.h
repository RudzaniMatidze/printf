#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list args);
int printf_string(va_list args);
int _strlen(char *str);
int _strlen_c(const char *str);
int print_percent(void);
int print_integer(va_list args);
int print_decimal(va_list args);

#endif
