#include "main.h"

/**
 * get_print - selects the right _printing function
 * depending on the conversion specifier passed to __printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to __printf
 * and the first element of the struct, and then the approriate
 * _printing function
 * Return: a pointer to the matching _printing function
 */
int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'i', _print_int},
		{'s', _print_string},
		{'c', _print_char},
		{'d', _print_int},
		{'u', _print_unsigned},
		{'x', _print_hex},
		{'X', _print_hex_big},
		{'b', _print_binary},
		{'o', _print_octal},
		{'R', _print_rot13},
		{'r', _print_rev},
		{'S', _print_bigS},
		{'p', _print_address},
		{'%', _print_percent}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
