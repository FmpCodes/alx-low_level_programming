#include <stdio.h>

/**
 * positive_or_negative - prints positive and negative
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * @i: some parameter
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	/**
	 * myif statement
	 */
	if (i == 0)
	{

		printf("%d is zero\n", i);

	}

	else if (i > 0)
	{

		printf("%d is positive\n", i);

	}

	else
	{

		printf("%d is negative\n", i);

	}
}
