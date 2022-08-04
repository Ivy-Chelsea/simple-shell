#include "shell.h"
/**
 * _strcpy - copies source to destination char
 * @dest: destination
 * @src: source
 * Return: Copy of char *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: first string + second string char *
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
/**
 * _strchr - locates character in string
 * @s: string to search in
 * @c : char to search for
 * Return: pointer to char*
 */
char *_strchr(char *s, char c)
{
	do	{
		if (*s == c)
		{
			break;
		}
	}	while (*s++);

	return (s);
}
/**
 * _strncmp - compares amount (n) of characters of two strings
 * @s1: string 1
 * @s2: string 2
 * @n: amount of characters to compare
 * Return: 1 if strings don't match, 0 otherwise
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (s1 == NULL)
		return (-1);
	for (i = 0; i < n && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
 * _strdup - duplicates a string
 * @str: string
 * Return: Null if duplicate string failed
 */
char *_strdup(char *str)
{
	size_t len, i;
	char *str2;

	len = _strlen(str);
	str2 = malloc(sizeof(char) * (len + 1));
	if (!str2)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}
