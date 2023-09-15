#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include<stdarg.h>
#include<stdio.h>
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

typedef struct print_all{
char *symbol;
void (*print)(va_list arg);
} print_all_p;

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif
