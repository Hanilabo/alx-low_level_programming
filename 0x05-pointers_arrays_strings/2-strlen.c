#include"main.h"

/**
 * _strlen- len of str
 *@s:str
 * return: 0
 */
int _strlen(char *s)
{
	int len = 0;
	
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
