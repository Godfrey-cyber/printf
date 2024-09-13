#include "main.h"

/**
 * printf_srev - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int printf_srev(va_list args)
{

	char *string = va_arg(args, char*);
	int x;
	int y = 0;

	if (string == NULL)
		string = "(null)";
	while (string[y] != '\0')
		y++;
	for (x = y - 1; x >= 0; x--)
		_putchar(string[x]);
	return (y);
}
