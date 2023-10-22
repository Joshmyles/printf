#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);

void print_unknown(char specifier, size_t *count);
void print_null_str(char *s, size_t *count);
void print_unsigned(unsigned int num, size_t *count);
void print_octal(unsigned int num, size_t *count);
void print_hex(unsigned int num, int uppercase, size_t *count);
void print_binary(unsigned int num, size_t *count);
void print_integer(int num, size_t *count);

void handle_cases(char specifier, va_list args, size_t *count);
void handle_hex(unsigned int num, int is_upper, size_t *count);
void handle_octal(unsigned int num, size_t *count);
void handle_unsigned(unsigned int num, size_t *count);
void handle_binary(unsigned int num, size_t *count);
void handle_string(char *s, size_t *count);
void handle_char(char c, size_t *count);
void handle_integer(unsigned int num, size_t *count);

#endif /** MAIN_H **/
