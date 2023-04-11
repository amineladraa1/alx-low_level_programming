#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry point
 *
 * Description: get ends of input and add together for size
 *
 * @s1: input one to concat
 * @s2: input two to concat
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *res;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	res = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (res == NULL)
	{
		return (NULL);
	}

	strcpy(res, s1);
	strcat(res, s2);

	return (res);
}
