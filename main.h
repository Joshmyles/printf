#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int cases(const *format, va_list args);

void print_unknown_specifier(char specifier, size_t *count);
void print_null_or_str(char *s, size_t *count);
void print_unsigned(unsigned int num, size_t *count);
void print_octal(unsigned int num, size_t *count);
void print_hex(unsigned int num, int uppercase, size_t *count);
void print_binary(unsigned int num, size_t *count);
void print_integer(int num, size_t *count);
void handle_format_specifier(char specifier, va_list args, size_t *count);
void handle_hex(unsigned int num, int is_upper, size_t *count);
void handle_octal(unsigned int num, size_t *count);
void handle_unsign(unsigned int num, size_t *count);
void handle_bin(unsigned int num, size_t *count);
void handle_str(char *s, size_t *count);
void handle_char(char c, size_t *count);
void handle_int(unsigned int num, size_t *count);

#endif /** MAIN_H **/
