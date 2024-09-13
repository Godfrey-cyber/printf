#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
        char *id;
        int (*f)();
} convert_h;

int printf_pntr(va_list val);
int printf_aux_hex(unsigned long int num);
int printf_HEX_AUX(unsigned int num);
int printf_ex_str(va_list val);
int printf_HEXADEC(va_list val);
int printf_hexadec(va_list val);
int printf_octag(va_list val);
int printf_unsgd(va_list args);
int printf_binary(va_list val);
int printf_streverse(va_list args);
int printf_rot_13(va_list args);
int printf_integer(va_list args);
int printf_decimal(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlen_c(const char *s);
int reverse_string(char *s);
int _strlenc(const char *s);
int printf_num_37(void);
int printf_char(va_list val);
int printf_strn(va_list val);
int putchar(char c);
int printf(const char *format, ...);

#endif
