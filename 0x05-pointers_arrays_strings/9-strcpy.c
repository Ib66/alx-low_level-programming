nclude <string.h>
#include "main.h"

/**
 *  * _strcpy - copies a string to another
 *   * @dest: first
 *    * @src: string to be copied
 *     *
 *      * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *v = strcpy(dest, src);

	return (v);
}
