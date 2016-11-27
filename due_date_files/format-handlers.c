/*functions handling format parsing*/

#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <unistd.h>

/**
 * grab_format - grabs format of given string
 * @format: format string
 * IMPORTANT: this function grabs the introductory %
 * this function grabs anything starting with a % and
 * ending with a non space character.
 * Return: format string
 */
char *grab_format(const char *format)
{
	int j;
	char *conv;

	j = 1;
	while (format[j] == ' ' && format[j])
		++j;
	conv = malloc((j + 2) * sizeof(char));
	conv = _strncpy(conv, format, j + 1);
	conv[j + 1] = '\0';
	return (conv);
}


/**
 * fill_format - fills in the format_array with all conversion formatters
 * including their flags
 * @format: formatting string containing possible formatters
 * Return: format_array
 */

void fill_format(const char *format)
{
	int i, l_conv;
	char *conv;

	for (i = 0; format[i] != '\0'; ++i)
	{
		if (format[i] == '%')
		{
			conv = grab_format(format + i);
			l_conv = _strlen(conv);
			get_validity_func(conv[l_conv - 1])(conv);
			free(conv);
			i += l_conv;

		}
	}
}
