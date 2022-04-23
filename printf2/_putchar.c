#include <unistd.h>

/**
 * _putchar - Writes output to stdout
 * @c - char to print
 *
 * Returns 1 on success -1 on failure
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
