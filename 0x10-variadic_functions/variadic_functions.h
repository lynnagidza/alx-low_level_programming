#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>
/**
 * struct check - Parameters to check against.
 * @chk: Type or parameter to check.
 * @f: The function to process the parameter.
 *
 * Description: This structure is used to associate a type or parameter with
 *              a corresponding processing function for variadic functions.
 */
typedef struct check
{
char *chk;
void (*f)(va_list list);
} check_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
