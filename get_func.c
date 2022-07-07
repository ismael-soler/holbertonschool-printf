#include "main.h"

/**
 * get_func - get function according to format
 * @c: format
 * Return: pointer to function or NULL
 */

int (*get_func(char c))(va_list arg)
{
	form_t ff[] = {
		{"c", form_c},
		{"s", form_s},
		{"d", form_d},
		{"i", form_i}
	};
	int i;

	for (i = 0; i < 4; i++)
		if (ff[i].form[0] == c)
			return (ff[i].f);
	return (0);
}
