#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string (same as dest).
 */
char *_strcat(char *dest, const char *src)
{
    char *ptr = dest;

    // Find the end of the destination string
    while (*dest != '\0')
    {
        dest++;
    }

    // Copy characters from the source string to the end of destination string
    while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
   	}
    // Add the null-terminator at the end
	*dest = '\0';

	return ptr;
}

