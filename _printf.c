#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...) {
    va_list args;
    int count = 0; // Count of characters printed

    va_start(args, format);

    for (const char *p = format; *p != '\0'; p++) {
        if (*p == '%') {
            p++; // Move to the specifier
            if (*p == 'c') {
                char c = (char) va_arg(args, int);
                write(1, &c, 1);
                count++;
            } else if (*p == 's') {
                const char *s = va_arg(args, const char *);
                while (*s != '\0') {
                    write(1, s++, 1);
                    count++;
                }
            } else if (*p == '%') {
                char percent = '%';
                write(1, &percent, 1);
                count++;
            } else {
                // If the specifier is unknown, print it literally
                write(1, "%", 1);
                write(1, p, 1);
                count += 2;
            }
        } else {
            write(1, p, 1);
            count++;
        }
    }

    va_end(args);

    return count;
}
