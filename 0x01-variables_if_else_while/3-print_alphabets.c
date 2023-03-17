#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
	char Uch;

	ch = 'a';
	Uch = 'A';
        
	while (ch <= 122)
	{
                putchar(ch);
		ch++;
        }
	while (Uch <= 90)
	{
		putchar(Uch);
		Uch++;
	}
	putchar('\n');
	return (0);
}
