#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

typedef struct form
{
	char *form;
	int (*f)(va_list arg);
} form_t;

	int (*get_func(char c))(va_list arg);
	int _putchar(char c);
	int _printf(const char *format, ...);
	int form_c(va_list arg);
	int form_s(va_list arg);
	int form_d(va_list arg);
	int form_i(va_list arg);
#endif
