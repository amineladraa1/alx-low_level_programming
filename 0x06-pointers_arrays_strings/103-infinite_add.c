#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: 'the program's description'
 *
 * @n1: char to check
 * @n2: char to check
 * @r: buffer
 * @size_r: number to check
 *
 * Return: Always 0 (Success)
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = 0, len2 = 0, i, j;
    char *p1 = n1, *p2 = n2, *pr = r;
    while (*p1 != '\0') {
        len1++;
        p1++;
    }
    while (*p2 != '\0') {
        len2++;
        p2++;
    }
    if (len1 > size_r || len2 > size_r) {
        return 0;
    }
    int carry = 0;
    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--) {
        int num1 = (i >= 0) ? (n1[i] - '0') : 0;
        int num2 = (j >= 0) ? (n2[j] - '0') : 0;
        int sum = num1 + num2 + carry;
        if (sum >= 10) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }
        if (pr - r >= size_r) {
            return 0;
        }
        *pr = sum + '0';
        pr++;
    }
    if (pr == r) {
        *pr = '0';
        pr++;
    }
    *pr = '\0';
    int len = pr - r;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }
    return r;
}
