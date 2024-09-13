#include "main.h"
/**
 * _printf - this function picks the right function to print.
 * @format: identifier to look for.
 * Return: the sive of the string.
 */
int _printf(const char * const format, ...)
{
	convert_h r[] = {
		{"%s", printf_strn}, {"%c", printf_char},
		{"%%", printf_num_37},
		{"%i", printf_integer}, {"%d", printf_decimal}, {"%r", printf_streverse},
		{"%R", printf_rot_13}, {"%b", printf_binary}, {"%u", printf_unsgd},
		{"%o", printf_octag}, {"%x", printf_hexadec}, {"%X", printf_HEXADEC},
		{"%S", printf_ex_str}, {"%p", printf_pntr}
	};

	va_list args;
	int x = 0, y, str_len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[x] != '\0')
	{
		y = 13;
		while (y >= 0)
		{
			if (r[y].id[0] == format[x] && r[y].id[1] == format[x + 1])
			{
				str_len += r[y].f(args);
				x = x + 2;
				goto Here;
			}
			y--;
		}
		_putchar(format[x]);
		str_len++;
		x++;
	}
	va_end(args);
	return (str_len);
}
