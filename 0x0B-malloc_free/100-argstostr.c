#include <stdlib.h>
#include <string.h>

/**
 * argstostr - main entry
 *
 * Description : concatenates all the arguments of the program
 *
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, pos, total_length;
	char *res;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	res = (char *)malloc(total_length * sizeof(char));
	if (res == NULL)
	{
		return NULL;
	}
	pos = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(res + pos, av[i]);
		pos += strlen(av[i]);
		res[pos++] = '\n';
	}
	res[pos - 1] = '\n';
	res[pos] = '\0';
	return (res);
}
