#include "main.h"
#include <string.h>
/**
 * _strncat -add 2 char with the last one having a n byte
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: Always dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
