#include "main.h"

/**
 *check for lower case
 */

int main(void)
{
int r;
r = islower('H');
_putchar(r + '0');
r = islower('o');
_putchar(r + '0');
r = islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
