#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * exponent - x to the power of y
 * @x: base number
 * @y: exponent
 * Description: calcuates x^y
 * Return: x^y
 **/
int exponent(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * exponent(x, y - 1));
}
/**
 * p_int - print an int using only _write
 * @number: int to print
 * Return: chars printed
 **/
int p_int(int number)
{
	int size, digit, result;
	long counter, sign;

	sign = 1;
	digit = 0;
	size = 1;
	counter = number;
	result = 0;

	if (number < 0)
	{
		_write('-');
		sign = -1;
		counter *= sign;
		result++;
	}

	for (; counter >= 10; size++)
	{
		counter = counter / 10;
	}

	counter = sign * (long)number;

	while (size >= 2)
	{
		digit = (counter / exponent(10, size - 1));
		_write(digit + '0');
		counter = counter % exponent(10, size - 1);
		size--;
		result++;
	}
	_write(counter % 10 + '0');
	result++;
	return (result);
}
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
