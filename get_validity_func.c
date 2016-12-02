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
<<<<<<< HEAD
		{'S', conversion_S},
=======
>>>>>>> a01841304bde7bdefebe8c347e574470be8a647d
		{'r', conversion_r}
	};
	int i;

	i = 0;
<<<<<<< HEAD
	while (i < 12)
=======
	while (i < 11)
>>>>>>> a01841304bde7bdefebe8c347e574470be8a647d
	{
		if (c == v[i].type)
			return (v[i].conversion_check);
		i++;
	}
	return (NULL);
}
