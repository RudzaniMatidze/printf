#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int _ptchr(char cr);
int _putss(char *s);
int print_rot13(va_list argmnt);
int print_integers(va_list args);
int print_decimals(va_list args);

#endif
