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
	char *p = str;
    while (*p) {
        *p += ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')) * 13 - ((*p >= 'N' && *p <= 'Z') || (*p >= 'n' && *p <= 'z')) * 26;
        p++;
    }
    return str;
}
