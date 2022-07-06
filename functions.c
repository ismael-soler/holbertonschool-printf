#include "main.h"

/**
 * form_c - prints in %c format
 * @a: argument to print
 * Return: length of printed argument
 */

int form_c(va_list a)
{
	if (a)
		_putchar(a + '0');
	return (1);
}

/**
 * form_s - prints in %s format
 * @a: argument to print
 * Return: length of printed argument
 */

int form_s(va_list a)
{
	int i;

	for (i = 0; a[i]; i++)
		_putchar(a[i] + '0');
	return (i - 1);
}
