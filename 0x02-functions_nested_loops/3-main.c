#include "main.h"

/**
 *check for lower case
 */

int main(void)
{
int r;
r = test_islower('H');
_putchar(r + '0');
r = test_islower('o');
_putchar(r + '0');
r = test_islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
