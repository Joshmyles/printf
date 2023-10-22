#include "main.h"

/**
 * print_unknown - the function
 * @specifier: input
 * @count: count
 * Return: none
 */
void print_unknown(char specifier, size_t *count)
{
write(1, "%", 1);
write(1, &specifier, 1);
(*count) += 2;
}

/**
 * print_binary - the function
 * @num: input
 * @count: count
 * Return: nothing
 */
void print_binary(unsigned int num, size_t *count)
{
char bin_str[32];
int len = 0;
int i;

while (num > 0)
{
bin_str[len++] = (num % 2) + '0';
num = num / 2;
}

if (len == 0)
bin_str[len++] = '0';

for (i = len - 1; i >= 0; i--)
{
write(1, &bin_str[i], 1);
(*count)++;
}
}

/**
 * print_null_str - the function
 * @s: input
 * @count: count
 * Return: nothing
 */
void print_null_str(char *s, size_t *count)
{
size_t len = 0;

if (s == NULL)
{
write(1, "(null)", 6);
(*count) += 6;
}
else
{
while (s[len] != '\0')
len++;
write(1, s, len);
(*count) += len;
}
}

/**
 * print_integer - the function
 * @num: input
 * @count: count
 * Return: noting
 */
void print_integer(int num, size_t *count)
{
char *num_str;
int len = 0;
int i;
int max_digits;

if (num == 0)
{
num_str = malloc(2);
if (num_str == NULL)
{
return;
}
num_str[len++] = '0';
}
else if (num < 0)
{
write(1, "-", 1);
(*count)++;
num = -num;
}
max_digits = 12;
num_str = malloc(max_digits);
if (num_str == NULL)
{
return;
}

while (num > 0)
{
num_str[len++] = num % 10 + '0';
num = num / 10;
}

for (i = len - 1; i >= 0; i--)
{
write(1, &num_str[i], 1);
(*count)++;
}
free(num_str);
}

/**
 * _printf - my printf function
 * @format: pointer to format
 * @...: various arguments
 * Return: the count
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

if (format == NULL)
return (-1);
while (format != '\0')
{
if (*format == '%')
{
format++;
len += cases(format, args);
}
else
{
len += write(STDOUT_FILENO, &(*format), 1);
}
format++;
}
va_end(args);
return (count);
}
