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
 * buffer - Temporary string to hold all everything to print
 * @a: character to add to string
 * @s: pointer to place in current string
 * Return: On success 1, 0 if string is NULL
 **/
int buffer(char a, char *s)
{
	if (s == NULL)
		return (0);
	s[0] = a;
	return (1);
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
