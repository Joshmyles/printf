#include "main.h"

/**
 * handle_integer - the function
 * @num: input
 * @count: count
 * Return: nothing
 */
void handle_integer(unsigned int num, size_t *count)
{
print_integer(num, count);
}

/**
 * handle_string - the function
 * @s: input
 * @count: count
 * Return: nothing
 */
void handle_string(char *s, size_t *count)
{
print_null_str(s, count);
}

/**
 * handle_binary - the function
 * @num: input
 * @count: count
 */
void handle_binary(unsigned int num, size_t *count)
{
print_binary(num, count);
}

/**
 * handle_unsigned - the function
 * @num: input
 * @count: count
 * Return: nothing
 */
void handle_unsigned(unsigned int num, size_t *count)
{
print_unsigned(num, count);
}

/**
 * handle_octal - the function
 * @num: input
 * @count: count
 * Return: nothing
 */
void handle_octal(unsigned int num, size_t *count)
{
print_octal(num, count);
}
