#include "main.h"

/**
 * get_func - get function according to format
 * @c: format
 * Return: pointer to function or NULL
 */

int (*get_func (char c))(va_list arg)
{
	form_t ff[] = {
		{"c", form_c},
		{"s", form_s},
		{NULL, NULL}
	};

	int i;
	for (i = 0; i < 3; i++)
		if (ff[i].form[0] == c)
			return (ff[i].f);
	return (NULL);
}
