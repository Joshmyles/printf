#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
count += print_char(args, &count);
break;
case 's':
count += print_string(args, &count);
break;
case '%':
count += print_percent(&count);
break;
default:
putchar('%');
count++;
putchar(*format);
count++;
}
}
else
{
putchar(*format);
count++;
}

format++;
}
va_end(args);
return (count);
}

/**
 * print_char - Print a character
 * @args: The va_list of arguments
 * @count: Pointer to the character count
 *
 * Return: Number of characters printed
 */
int print_char(va_list args, int *count)
{
char c = va_arg(args, int);
putchar(c);
(*count)++;
return (1);
}

/**
 * print_string - Print a string
 * @args: The va_list of arguments
 * @count: Pointer to the character count
 *
 * Return: Number of characters printed
 */
int print_string(va_list args, int *count)
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
while (*str)
{
putchar(*str);
(*count)++;
str++;
}
return (*count);
}

/**
 * print_percent - Print a percent character
 * @count: Pointer to the character count
 *
 * Return: Number of characters printed
 */
int print_percent(int *count)
{
putchar('%');
(*count)++;
return (1);
}
