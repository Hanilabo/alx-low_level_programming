#include"main.h"

/**
 * _strlen- len of str
 *@s:str
 * Return:len (for lenght)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
