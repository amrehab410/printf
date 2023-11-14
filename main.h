#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <unistd.h>
#include <math.h>

int _printf(const char *format, ...);
int formatloop(const char *format, va_list list);
int char_check(va_list list);
void vaListToArray(int count, ...);
unsigned long int format2(char format, va_list list);
char *intToBinary(int num);
int string_check(va_list list, char op);
int binary_check(va_list list);
int int_check(va_list list);
char *intToOcta(int num);
int octal_check(va_list list);
int unsigned_check(va_list list);
char *intToHEX(int num);
char *intTohex(int num);
int HEX_check(va_list list);
int hex_check(va_list list);
int _putchar(char c);
int percent_check(void);

#endif
