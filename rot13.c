#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * conversion_R - conversion check for rot13
 * @s: formatter
 * Return: 1 if true, 0 otherwise
 */

int conversion_R(char *s)
{
        (void) s;
        return (1);
}

/**
 * make_rot13 - makes the rot13 string
 * @s: formatter
 * @vl: arguement/string to encode
 * @buf: to fill
 * Return: none
 */

void make_rot13(char *s, va_list vl, buf_type *buf)
{
	char *result;
	(void) s;

	result = _strdup(va_arg(vl, char *));
	if (result == NULL)
		result = "(null)";
	result = rot13(result);
	fill_buffer(buf, result, _strlen(result));
}

/**
 * rot13 - conver string o rot13
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = (s[i] + 13);
		}
		else
			while ((s[i] >= 'n' && s[i] <= 'z') ||
			       (s[i] >= 'N' && s[i] <= 'Z'))
			{
				s[i] = (s[i] - 13);
			}
		i++;
	}
	return (s);
}
