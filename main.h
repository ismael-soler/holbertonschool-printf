#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct form
{
	char *form
	int (*f)(va_list arg)
} form_t;

	int (*get-func(char *c))(va_list arg);
	int _putchar(char c);
	int _printf (const char *format, ...)
	int form_c (va_list a);
	int form_s (va_list);
#endif