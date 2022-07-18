#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: a pointer to the byte that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
i = 0;
while (s[i])
{
j = 0;
while (accept[j])
{
if (s[i] == accept[j])
return (s + i);
j++;
}
i++;
}
return (0);
}
