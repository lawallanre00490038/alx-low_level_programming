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
int ch;
int n;
int m;
for (ch = 48; ch <= 57; ch++)
{
for (n = 49; n <= 57; n++)
{
for (n = 50; n <= 57; n++)
{
if (n > ch && m > n)
{
putchar(ch);
putchar(n);
putchar(m);

if (ch != 56 || n != 57)
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar(10);
return (0);
}
