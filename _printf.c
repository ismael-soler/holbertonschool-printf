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
			else if (format[i] != '\0')
			{
				if (get_func(format[i]))
					counter += get_func(format[i])(arg);
				else if (get_func(format[i]) == 0)
				{
					_putchar('%');
					_putchar(format[i]);
					counter += 2;
				}
			}
			else
				return (-1);
		}
	}
	va_end(arg);
	return (counter);
}
