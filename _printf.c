#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom implementation of printf function.
 * @format: Format string containing the characters and the specifiers.
 *
 * Description: This function produces output according to a format.
 * It handles the following conversion specifiers: c, s, and %.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, count = 0;
    char *str;
    char ch;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'c':
                    ch = (char)va_arg(args, int);
                    count += write(1, &ch, 1);
                    break;
                case 's':
                    str = va_arg(args, char *);
                    if (str == NULL)
                        str = "(null)";
                    while (*str)
                    {
                        count += write(1, str, 1);
                        str++;
                    }
                    break;
                case '%':
                    count += write(1, "%", 1);
                    break;
                default:
                    count += write(1, "%", 1);
                    count += write(1, &format[i], 1);
                    break;
            }
        }
        else
        {
            count += write(1, &format[i], 1);
        }
        i++;
    }

    va_end(args);
    return (count);
}
