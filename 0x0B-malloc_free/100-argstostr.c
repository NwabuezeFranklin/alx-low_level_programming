#include "main.h"
/**
 * argstostr - prints args
 * @ac: takes in width of grid
 * @av: height of grid
 * Return: the args one line at a time
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
