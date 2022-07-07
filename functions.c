#include "main.h"

/**
 * form_c - prints in %c format
 * @arg: argument to print
 * Return: length of printed argument
 */

int form_c(va_list arg)
{
	int a;

	if (arg)
	{
		a = va_arg(arg, int);
		_putchar(a);
	}
	return (1);
}

/**
 * form_s - prints in %s format
 * @arg: argument to print
 * Return: length of printed argument
 */

int form_s(va_list arg)
{
	int i;
	char *a;

	if (arg)
	{
		a = va_arg(arg, char *);
		if (a == NULL)
		{
			_putchar('(');
			_putchar('n');
			_putchar('u');
			_putchar('l');
			_putchar('l');
			_putchar(')');
			return (6);
		}
		for (i = 0; a[i]; i++)
			_putchar(a[i]);
		return (i);
	}
	return (0);
}
