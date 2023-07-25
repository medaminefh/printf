#include "main.h"

/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)

		i++;

	return (i);
}



/**
 * _printchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printchar(int c)
{
	return (write(1, &c, 1));
}

/**
 * _printstring - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printstring(char *s)
{
int i = 0;
int len = _strlen(s);
if (s == NULL)
{
	s = "(Null)";
}

while (i < len)
{
_printchar(s[i]);
i++;
}
return (len);
}
