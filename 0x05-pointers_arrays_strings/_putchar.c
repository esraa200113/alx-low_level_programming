#include "unistd.h"
/**
 * main - Entry point.
 *
 * Description: Prints "_putchar" using the _putchar prototype.
 *
 * @c:The character to be printed
 *
 * Return: On sucess 1
 *        on error -1 is returned and error is set approperiately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
