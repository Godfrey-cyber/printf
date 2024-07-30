#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct vtype - struct vtype
 * @tp: tp
 * @f: function
 *
 */
int _putchar(char c);
int _printf(const char *format, ...);
int print_number(int n);
int dec_to_binary(int n);
int _putstring(char *s);
void _reverse(char *s);
int rev_str(char *s);
int rot13(char *point);
int print_digit(int n);
int _strlen(char *s);
#endif /* MAIN_H */
