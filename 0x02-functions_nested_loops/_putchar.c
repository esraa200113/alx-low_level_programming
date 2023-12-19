#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 *
 * @C: The character to print
 *
 * Return - on success 1
 *          on error, -1 is returned, and error is set approperiately
*/

int _putchar(char C)
{
	return (write(1, &C, 1));
}
