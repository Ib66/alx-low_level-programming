#include <stdio.h>

/**
 *   * main - program entry point
 *     *
 *       * Description: computes the first 50 fibonacci numbers
 *         * Return: nothing due to the void nature of the function datatype
 *           */
int main(void)
{
		int count = 0;

			long long int initializingNum = 1;
				long long int initializingNum2 = 2;
					long long int nextNum;

						while (count <= 98)
								{
											if (count == 0)
															printf("%lld", initializingNum);
													else if (count == 1)
																	printf(", %lld", initializingNum2);
															else
																		{
																						nextNum = initializingNum + initializingNum2;
																									printf(", %lld", nextNum);
																												initializingNum =  initializingNum2;
																															initializingNum2 = nextNum;
																																	}

																	count++;
																		}

							printf("\n");
								return (0);
}
