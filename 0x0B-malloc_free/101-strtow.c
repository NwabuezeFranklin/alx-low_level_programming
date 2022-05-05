#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string of words to be split
 * Return: double pointer to strings
 */
char **strtow(char *str)
{
	char **ptr;
	int i, k, len, start, end, j = 0;
	int words =  countWords(str);

	if (!str || !countWords(str))
		return (NULL);
	ptr = malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		start = startIndex(str, j);
		end = endIndex(str, start);
		len = end - start;
		ptr[i] = malloc(sizeof(char) * (len + 1));
		if (!ptr[i])
		{
			i -= 1;
			while (i >= 0)
			{
				free(ptr[i]);
					i--;
			}
			free(ptr);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			ptr[i][k] = str[start++];
		ptr[i][k++] = '\0';
		j = end + 1;
	}
	ptr[i] = NULL;
	return (ptr);
}

/**
 * isSpace - determines if character is a space or not
 * @c: input char
 * Return: 1 if true or 0 or not
 */
int isSpace(char c)
{
	return (c == ' ');
}

/**
 * startIndex - returns first index of non-space char
 * @s: input string
 * @index: starting index
 * Return: index of first non-space char
 */
int startIndex(char *s, int index)
{

	while (isSpace(*(s + index)))
		index++;
	return (index);
}

/**
 * endIndex - returns last index of non-space char
 * @s: input string
 * @index: starting index
 * Return: index of last index of non-space char
 */
int endIndex(char *s, int index)
{
	while (!isSpace(*(s + index)))
		index++;
	return (index);
}

/**
 * countWords - counts numbers of words in string
 * @s: input string
 * Return: number of words
 */
int countWords(char *s)
{
	int wordOn = 0;
	int words = 0;

	while (*s)
	{
		if (isSpace(*s) && wordOn)
			wordOn = 0;
		else if (!isSpace(*s) && !wordOn)
		{
			wordOn = 1;
			words++;
		}
		s++;
	}
	return (words);
}
