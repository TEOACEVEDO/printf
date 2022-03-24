#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * p_string - pring string
 * @s: string to print
 * Return: nothing
 **/
int p_string(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_write(s[i]);
	}
	return (i);
}
/**
 * p_rstr - print string in reverse
 * @s: string to reverse
 * Return: size of string
 **/
int p_rstr(char *s)
{
	if (s[1] == '\0')
	return (_write(s[0]));

	return (p_rstr(&s[1]) + _write(s[0]));
}

/**
 * _write - writes the character c to stdout
 * @c: the char to print
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
