#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _ptchr(char cr);
int _putss(char *s);
int print_rot13(va_list argmnt);
int print_integers(va_list args);
int print_decimals(va_list args);
int print_binary(va_list b);
int print_percent(va_list args);
int print_address(va_list args);
int print_rev(va_list args);
int print_string(va_list args);
int print_char(va_list args);

#endif
