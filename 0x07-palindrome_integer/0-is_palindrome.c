#include "palindrome.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(unsigned long n)
{
    unsigned long rev = 0;
    unsigned long temp = n;

    if (n == 0)
        return (1);
    /*reverse the number*/
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    /*check if reversed number is the same as the original*/
    if (rev == temp)
        return (1);
    return (0);
}

