#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_string - makes object into string
 * @args: va_list object
 * Return: chars printed
 **/
int print_string(va_list *args)
{
        return (p_string(va_arg(*args, char *)));
}

/**
 * print_int - makes object into int
 * @args: va_list object
 * Return: digits printed
 **/
int print_int(va_list *args)
{
        return (p_int(va_arg(*args, int)));
}

/**
 * print_char - makes object into char
 * @args: va_list object
 * Return: chars printed
 **/
int print_char(va_list *args)
{
        return (_write(va_arg(*args, int)));
}