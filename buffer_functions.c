/*this file contains functions related to the use of the buffer
 * the buffer length is BUF_LENGTH, defined elsewhere
 * The buffer is created elsewhere
 */
#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
 * _flush - fill the buffer with \0
 * @buffer: buffer;
 * The length of the buffer is defned in a macro
 */
void _flush(char *buffer)
{
	int i;

	for (i = 0; i < BUF_LENGTH; ++i)
		buffer[i] = '\0';
}

/**
 * fill_buffer - fills the buffer with string s
 * @buf: a pointer to a buf_type structure
 * @s: a string to fill buffer with
 * IMPORTANT: update count_c in printf only after filling the buffer, I need to
 * know here at which index I can start to append to the buffer
 * @s_length: length of string, not required, but if I have it rigth away
 * in printf I might just pass it instead of calling strlen here
 * Fills the buffer starting at index count_c with string s of length s_length
 * Return: pointer to buf_type
 */
buf_type *fill_buffer(buf_type *buf, const char *s, int s_length)
{
	int i, buffer_index;

	i = 0;
	buffer_index = buf->buf_index;
	while (i < s_length)
	{
		if (buffer_index == BUF_LENGTH)
		{
			print_buffer(buf->buffer, BUF_LENGTH);
			_flush(buf->buffer);
			buffer_index = 0;
		}
		buf->buffer[buffer_index] = s[i];
		++i;
		++buffer_index;
		++buf->count_c;
	}
	buf->buf_index = buffer_index;
	return (buf);
}


/**
 * fill_char_buffer - fills the buffer with a char
 * @buf: a pointer to a buf_type struct
 * @c: a char
 * Return: a pointer to the buf_type structure
 */
buf_type *fill_char_buffer(buf_type *buf, char c)
{
	char s[1] = {c};

	fill_buffer(buf, s, 1);

	return (buf);
}


/**
 * print_buffer - prints the buffer
 * @buffer: a buffer, char array
 * @length: number of characters I need to print
 *
 * Return: void
 */
void print_buffer(char *buffer, int length)
{

	if (length > BUF_LENGTH)
		length = length % BUF_LENGTH;
	if (length != 0)
		write(1, buffer, length);
}
