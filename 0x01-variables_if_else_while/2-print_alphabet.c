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
char ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
