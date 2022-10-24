#include "main.h"

/**
 *  * swap_int - swaps the valuse of two int
 *   * @a: pointer of the first int
 *    * @b: pointer of the second int
 *     *
 *      * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
