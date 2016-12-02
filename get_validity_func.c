#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_validity_func - selects the correct validity func to perform
 * @c: formatter passed
 * Return: a pointer to function given formatter
 */

int (*get_validity_func(char c))(char *)
{
	printf("HI IM HERE\n");
	valid v[] = {
		{'c', conversion_char},
		{'s', conversion_string},
		{'%', conversion_percent},
		{'d', conversion_di},
		{'i', conversion_di},
		{'u', conversion_u},
		{'x', conversion_h},
		{'X', conversion_h},
		{'b', conversion_b},
		{'o', conversion_o},
		{'S', conversion_S},
		{'r', conversion_r}
	};
	int i;

	i = 0;
	while (i < 12)
	{
		if (c == v[i].type)
			return (v[i].conversion_check);
		i++;
	}
	return (NULL);
}
