#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <unistd.h>

int _printf(const char *format, ...);
int formatloop(const char *format, va_list list);
int char_check(int str);
void vaListToArray(int count, ...);

#endif
