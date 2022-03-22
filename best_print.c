#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
/**
* best_print - Select case according to letter
* @s: selector pointer
* Return: NULL or case
*/

int best_print(char c, va_list *args)
{
	int i = 0;
	find_flag flags[] = {
			{'c', print_char},
			{'s', print_string},
			{'d', print_int},
			{'i', print_int},
			{'\0', NULL}
	};
for (i = 0; flags[i].letter != '\0'; i++)
	{
		if (flags[i].letter == c)
		{
			return (flags[i].prnt(args));
		}
	}
	if (c == '%')
	{
		_write('%');
		return (1);
	}
	return (0);
}
