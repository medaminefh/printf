#include "main.h"

/**
 * _printf - writes the character c to stdout
 * @format: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printf(const char *format, ...)
{
int i = 0;
va_list args;
char *str;

va_start(args, format);
while (format != NULL && format[i] != '\0')
{

if (format[i] == '%')
{
switch (format[i + 1])
{
	case '%':
		_printchar('%');
		i++;
		break;
	case 'c':
		_printchar(va_arg(args, int));
		i++;
		break;
	case 's':
		str = va_arg(args, char *);
		_printstring(str);
		i++;
		break;
	default:
		break;
}
}
else
	_printchar(va_arg(args, int));
i++;
}
return (i);
}
