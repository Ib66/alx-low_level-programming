#include "main.h"

/**
 *   * print_times_table - outputs to the console formatted multiplication table
 *     * @n: given integer number for which multiplication table is to be computed
 *       *
 *         * Return: nothing because of the datatype of the function
 *           */
void print_times_table(int n)
{
		int i, j, result;

			if (n >= 0 && n <= 14)
					{
								for (i = 0; i <= n; i++)
											{
															for (j = 0; j <= n; j++)
																			{
																								result = i * j;
																												if (result > 99)
																																	{
																																							_putchar(',');
																																												_putchar(' ');
																																																	_putchar((result / 100) + '0');
																																																						_putchar(((result / 10) % 10) + '0');
																																																											_putchar((result % 10) + '0');
																																																															}
																																else if (result > 9)
																																					{
																																											_putchar(',');
																																																_putchar(' ');
																																																					_putchar(' ');
																																																										_putchar((result / 10) + '0');
																																																															_putchar((result % 10) + '0');
																																																																			}
																																				else
																																									{
																																															if (result >= 0 && j > 0)
																																																					{
																																																												_putchar(',');
																																																																		_putchar(' ');
																																																																								_putchar(' ');
																																																																														_putchar(' ');
																																																																																				_putchar(result + '0');
																																																																																									}
																																																				else
																																																											_putchar(result + '0');
																																																								}
																																							}
																		_putchar('\n');
																				}
									}
}
