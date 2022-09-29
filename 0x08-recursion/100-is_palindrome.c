#include "main.h"

/**
 * File: 100-is_palindrome.c
 * Auth: Lynn Ekalaji
 * Desc: A function that returns 1 if a string is a palindrome and 0 if not.
 */
 
int palindromeChecker(char *str, int len, int i)
{
if (i < len && str[i] == str[len])
return (palindromeChecker(str, len - 1, i + 1));
if (str[i] != str[len])
return (0);
return (1);
}

int _strlen_recursion(char *s)
{
if (*s != '\0')
return (1 + _strlen_recursion(s + 1));

return (0);
}

int is_palindrome(char *s)
{
int i = 0;
int length = _strlen_recursion(s) - 1;

return (palindromeChecker(s, length, i));
}
