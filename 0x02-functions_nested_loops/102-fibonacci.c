nclude <stdio.h>

/**
 *   * main - program entry point
 *     *
 *       * Description: computes the first 50 fibonacci numbers
 *         * Return: nothing due to the void nature of the function datatype
 *           */
int main(void)
{
		int count = 0;

			long int initializingNum = 1;
				long int initializingNum2 = 2;
					long int nextNum;

						while (count < 50)
								{
											if (count == 0)
															printf("%ld", initializingNum);
													else if (count == 1)
																	printf(", %ld", initializingNum2);
															else
																		{
																						nextNum = initializingNum + initializingNum2;
																									printf(", %ld", nextNum);
																												initializingNum =  initializingNum2;
																															initializingNum2 = nextNum;
																																	}

																	count++;
																		}

							printf("\n");
								return (0);
}
