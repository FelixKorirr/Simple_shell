#include "header.h"

/**
 **_stcpy - copies a string
 *@st: destination string
 *@str: source string
 *@n: amount of characters copied
 *Return: new string
 */
char *_stcpy(char *st, char *str, int n)
{
	int i, k;
	char *x = st;

	i = 0;
	while (str[i] != '\0' && i < n - 1)
	{
		st[i] = str[i];
		i++;
	}
	if (i < n)
	{
		k = i;
		while (k < n)
		{
			st[k] = '\0';
			k++;
		}
	}
	return (x);
}

/**
 **_stcat - concats two strings
 *@st: first string
 *@str: last string
 *@n: amount of bytes to be used
 *Return: concatenated string
 */
char *_stcat(char *st, char *str, int n)
{
	int i, k;
	char *x = st;

	i = 0;
	k = 0;
	while (st[i] != '\0')
		i++;
	while (str[k] != '\0' && k < n)
	{
		st[i] = str[k];
		i++;
		k++;
	}
	if (k < n)
		st[i] = '\0';
	return (x);
}

/**
 **_stchr - locates character in string
 *@src: parsed string
 *@ch: character
 *Return: pointer to memory area
 */
char *_stchr(char *src, char ch)
{
	do {
		if (*src == ch)
			return (src);

	} while (*src++ != '\0');

	return (NULL);
}
