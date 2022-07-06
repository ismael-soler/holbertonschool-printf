#include "main.h"

/**
 * _printf - prints
 * @format: format
 * Return: a
 */

int _printf(const char *format, ...)
{
	int i, counter = 0;
	va_list arg;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
		}
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				counter++;
			}
			else
			{
				counter += get_func(format[i])(arg);
			}
		}
	}
	va_end(arg);
	return (counter);
}
