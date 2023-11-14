#include "main.h"
#include <unistd.h>

/**
 * _ptchr - Prints a character
 * @cr: input character
 * Return: 1
 */
int _ptchr(char cr)
{
	return (write(1, &cr, 1));
}
