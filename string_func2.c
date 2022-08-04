#include "shell.h"
/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: 1 on success, -1 on error, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strncpy - copies a string
 * @dest: char 1
 * @src: char 2
 * @n: integer
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
/**
 * _strlen - length of a string
 * @s: char
 * Return: integer
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continues;
	}
	return (i);
}
/**
 * _atoi - converts integer to character
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i, j, n, x;

	i = n = 0;
	x = 1;
	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			x *= -1;
		i++;
	}
	return (n);
}
/**
 * _puts - prints a string
 * @str: pointer to character
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
