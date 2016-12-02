#include "holberton.h"
#include <stdio.h>

/*how to deal with no_conversion formats*/

/**
 * make_no_conversion - formats the string when the format is not recognized
 * @conv: the conversion string
 * @buf: pointer to buffer structure
 * IMPORTANT: such a conversion string starts with a %
 * it is made of [spaces] and a char, only
 * print one space and the char
 * Return:void fills the buffer
 */
void make_no_conversion(char *conv, buf_type *buf)
{
	int i, l_conv, flag_space;

	i = 0;
	l_conv = _strlen(conv);
	flag_space = 0;
/*if conv consists just of '%' or '%   ' do not print anything*/
	if (*(conv + l_conv - 1) == '%' || *(conv + l_conv - 1) == ' ')
		return;
	while (i < l_conv)
	{
		if (*(conv + i) == ' ' && !flag_space)
		{
			fill_char_buffer(buf, ' ');
			flag_space = 1;
		}
		if (*(conv + i) != ' ')
			fill_char_buffer(buf, *(conv + i));
		++i;
	}
}
