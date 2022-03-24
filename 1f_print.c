#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_rstr - makes object into rev string
 * @args: va_list object
 * Return: chars printed
 **/
int print_rstr(va_list *args)
{
    return (p_rstr(va_arg(*args, char *)));
}
