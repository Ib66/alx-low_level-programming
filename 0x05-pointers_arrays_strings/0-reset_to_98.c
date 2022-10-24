#include "main.h"
#include <stdio.h>

/**
 * reset_to_98: collects a pointer and updates it to 98
 * (int *n): this refers to a pointer
 *
 * return: void
 */

int main(void)
{
	int m;
	int *n;

	m = 45;
	n = &m;
	printf("value of m: %d\n", m);

	*n = 98;
	printf("value of m: %d\n", m);
	return (0);
}
