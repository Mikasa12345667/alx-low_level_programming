#include <unistd.h>

/**
 * _putchar - writes the character c too stdout
 * @c: The character to print
 *
 * Return: ON success 1.
 * On error -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
