#include "main.h"

/**
 *  * more_numbers - outputs the number 0-14, ten times
 *   *
 *    * Description: _putchar function is used for this purpose
 *     * Return: nothing because of the "void" nature of the function datatype
 *      */
void more_numbers(void)
{
		int count;
			int counter;

				for (count = 0; count <= 10; count++)
						{
									while (counter <= 14)
												{
																if (counter > 9)
																				{
																									_putchar((count / 10) + '0');
																													_putchar((count % 10) + '0');
																																}
																			else
																								_putchar(count + '0');
																						counter++;
																								}
											_putchar('\n');
												}
}

