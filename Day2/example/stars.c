#include <stdio.h>

int main(int argc, char * argv[])
{
	int n = 5;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}	

	printf("-----\n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
			printf("*");
		printf("\n");
	}	

	printf("-----\n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}

	printf("-----\n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int j = 0; j < n - i; j++)
			printf("*");
		printf("\n");
	}

	printf("-----\n");

	for (int i = 0; i < n; i++)
	{
		if (i < (n / 2))
			for (int j = 0; j <= i; j++)
				printf("*");
		else
			for (int j = 0; j < n - i; j++)
				printf("*");

		printf("\n");
	}

	printf("-----\n");

	for (int i = 0; i < n; i++)
	{
		if (i < (n / 2))
		{
			for (int j = 0; j < (n - 1) / 2 - i ; j++)
				printf(" ");

			for (int j = 0; j <= i; j++)
				printf("*");
		}
		else
		{
			for (int j = 0; j < i - n / 2; j++)
				printf(" ");

			for (int j = 0; j < n - i; j++)
				printf("*");
		}

		printf("\n");
	}

	printf("-----\n");

	for (int i = 0; i < n; i++)
	{
		if (i < (n / 2))
		{
			for (int j = 0; j < (n - 1) / 2 - i ; j++)
				printf(" ");

			for (int j = 0; j < i * 2 + 1; j++)
				printf("*");
		}
		else
		{
			for (int j = 0; j < i - n / 2; j++)
				printf(" ");

			for (int j = 0; j < (n - i) * 2 - 1; j++)
				printf("*");
		}

		printf("\n");
	}

	printf("-----\n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");

		for (int j = 0; j < n; j++)
			printf("*");
		printf("\n");
	}

	printf("-----\n");

	for (int i = 0; i < n; i++)
	{
		if (i < n/2)
		{
			for (int j = 0; j < ((n - 1)/2 - i); j++)
				printf("*");

			for (int j = 0; j < i * 2 + 1; j++)
				printf(" ");

			for (int j = 0; j < ((n - 1)/2 - i); j++)
				printf("*");
		}
		else
		{
			for (int j = 0; j < (i - n/2); j++)
				printf("*");

			for (int j = 0; j < (n - i) * 2 - 1; j++)
				printf(" ");

			for (int j = 0; j < (i - n/2); j++)
				printf("*");
		}
		printf("\n");
	}

	printf("-----\n");

	/*으아 귀찮아*/

	printf("-----\n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if ( i==0 || i== n-1 || j==0 || j==n-1)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}

	printf("-----\n");

	for (int i = 0; i <  2 * n; i++)
	{
		if(i < n)
			for (int j = 0; j <= i; j++)
				printf("*");
		else
		{
			for (int j = 0; j < i - n; j++)
				printf(" ");
			for (int j = 0; j < n * 2 - i; j++)
				printf("*");
		}
		printf("\n");
	}

	printf("-----\n");

	/*으아 귀찮아 */

	return 0;
}