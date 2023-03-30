#include "main.h"

/**
 * rot13 - Entry point
 *
 * Description: 'the program's description'
 *
 * @str: char to check
 *
 * Return: pointer to a string (Success)
 */

char *rot13(char *str)
{
	 char *p = s;
    while (*p)
    {
        int diff = (*p >= 'a' && *p <= 'z') ? 'a' : (*p >= 'A' && *p <= 'Z') ? 'A' : 0;
        if (diff)
        {
            *p = ((int)(*p - diff + 13) % 26) + diff;
        }
        p++;
    }
    return s;
}
