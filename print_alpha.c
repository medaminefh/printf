#include "main.h"

/**
 * _print_string - loops through a string and _prints
 * every character
 * @l: va_list arguments from __printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to __printf
 * Return: number of char _printed
 */
int _print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * _print_char - _prints a character
 * @l: va_list arguments from __printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to __printf
 * Return: number of char _printed
 */
int _print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
