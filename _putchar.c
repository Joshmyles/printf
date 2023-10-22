#include <unistd.h>
#include "main.h"

/**
 * _putchar - the function to print
 * @c: input
 * Return: successful 1, error, -1, and errno is set.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
