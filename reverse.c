#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * conversion_r - conversion check for reverse
 * @s: formatter
 * Return: 1 if true, 0 otherwise
 */

int conversion_r(char *s)
{
        (void) s;
        return (1);
}

/**
 * make_rev - makes the reverse string
 * @s: formatter
 * @vl: arguement/string to reverse
 * @buf: to fill
 * Return: none
 */

void make_rev(char *s, va_list vl, buf_type *buf)
{
	char *result;
	(void) s;

	result = _strdup(va_arg(vl, char *));
	if (result == NULL)
		result = "(null)";
	rev_string(result);
	fill_buffer(buf, result, _strlen(result));
}

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j;
	char letter;

	for (i = 0; s[i] != 0; i++)
	{
	}

	j = 0;
	i = i - 1;
	while (j < i)
	{
		letter = s[i];
		s[i] = s[j];
		s[j] = letter;
		j++;
		i--;
	}

}

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of string str
 * @str: string to copy
 * Return: pointer to copy of string
 */

char *_strdup(char *str)
{
	char *copy_string;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	copy_string = malloc(i * sizeof(char));
	if (copy_string == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		copy_string[j] = str[j];
		j++;
	}
	return (copy_string);
}
