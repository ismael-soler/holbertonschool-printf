#include "main.h"

/**
 * form_c - prints in %c format
 * @a: argument to print
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
 * @a: argument to print
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
			_putchar('\0');
			return (6);
		}
		for (i = 0; a[i]; i++)
			_putchar(a[i]);
		return (i);
	}
	return (0);
}
