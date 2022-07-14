#include "main.h"
#include <string>
#include <stdio.h>

/**
 *_strcpy - copies the string
 * @dest: 1st argument char type pointer
 * @src:the pointer that receives the string
 * Description: copies the string to an array
 * Return: na
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < src[i]; i++)
dest[i] = '\0';
return (dest);
}
