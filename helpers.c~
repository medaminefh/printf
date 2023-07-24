#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_all - prints a name as is
 * @format: ...
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
unsigned int i = 0;
va_list args;
char *x;

va_start(args, format);
while (format != NULL && format[i] != '\0')
{
	switch (format[i])
	{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			x = va_arg(args, char*);
			if (x == NULL)
				x = "(nil)";
			printf("%s", x);
			break;
		default:
			i++;
			continue;
	}
	if (format[i + 1] != '\0')
		printf(", ");
i++;
}
va_end(args);
printf("\n");
}
