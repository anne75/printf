#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_mstring_func - selects the correct validity func to perform
 * @c: formatter passed
 * Return: a pointer to function given formatter
 */

void (*get_mstring_func(char c))(char *, va_list, buf_type *)
{
	m_string v[] = {
		{'c', make_char},
		{'s', make_string},
		{'%', make_percent},
		{'d', make_decimal},
		{'i', make_decimal},
		{'u', make_unsigned},
		{'x', make_hex},
		{'X', make_heX},
		{'b', make_binary},
		{'o', make_octal},
<<<<<<< HEAD
		{'S', make_S},
		{'r', make_rev}
=======
		{'r', make_reverse}
>>>>>>> a01841304bde7bdefebe8c347e574470be8a647d
	};
	int i;
	printf("FF");
	i = 0;
<<<<<<< HEAD
	while (i < 12)
=======
	while (i < 11)
>>>>>>> a01841304bde7bdefebe8c347e574470be8a647d
	{
		if (c == v[i].type)
			return (v[i].make_s);
		i++;
	}
	return (NULL);
}
