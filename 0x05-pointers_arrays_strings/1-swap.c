#include"main.h"

/**
 * swap_int - swap values of two integars
 *
 * @a : first int
 * @b : second int
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
