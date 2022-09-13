#include <stdio.h>
#include "main.h"
/**
 *  * _islower - function name
 * @c : varable
 * Description : checks if it is caselower
 * Return: int
 */
int _islower(int c)

{	if (c >= 97 && c <= 122)

	{
		return (1);
	}
	else

	{
		return (0);
	}
}
