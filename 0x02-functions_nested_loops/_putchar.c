#include <unistd.h>

/**
 * _putchar - writes the characher c to stdout
 * @c: The character to print
 * Return:on success 1.
 * 0n error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)

{
	return (write(1, &c, 1));

}
