#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: 'this is the print of alphabet in lower case'
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int n;
char ch;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
