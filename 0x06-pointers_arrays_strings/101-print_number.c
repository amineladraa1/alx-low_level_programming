#include "main.h"

/**
 * print_number - Entry point
 *
 * Description: 'the program's description'
 *
 * @n: number to check
 *
 * Return: void (Success)
 */

void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    if (n / 10) {
        print_number(n / 10);
    }
    _putchar(n % 10 + '0');
}
