// Name of Coder : Mangesh Chandrawanshi
// Roll No.      : 1801CS16
// Date          : 5 March 2019
// Brief Objective of Program : Complete the tasks given in question paper (Mid-semester examination)


#include <stdio.h>

// Function to calculate GCD of N and P
int GCD(int N, int P)
{
	if(N % P == 0)
	{
		return P;
	}
	else
	{
		return GCD(P % N, N);
	}
}


int main()
{
	int M, N, P, counter_g1 = 0, counter_g2 = 0;

	// Prompt user for input
	scanf("%d %d %d", &M, &N, &P);

	printf("%d ", GCD(N, P));

	// Calculate rational numbers < 1
	for (int a = 0; a <= M; a++)
	{
		for (int b = a+1; b <= M; b++)
		{
			if (GCD (a, b) == 1)
			{
				counter_g1++;
			}
		}
	}

	printf("%d ", counter_g1);

	// Calculate rational numbers >= 1
	for (int b = 1; b <= M; b++)
	{
		for (int a = b; a <= M; a++)
		{
			if (GCD (a, b) == 1)
			{
				counter_g2++;
			}
		}
	}

	printf("%d ", counter_g2);

	// Print x type of numbers
	printf("{%d/%d}", M-1, M);

	// Print y type of numbers	
	printf(" {");
	
	for (int b = 1; b < M; b++)
	{
		if (b == 1)
		{
			if (GCD (M, b) == 1)
			{
				printf("%d/%d", M, b);
			}
		}
		else
		{
			if (GCD (M, b) == 1)
			{
				printf(" %d/%d", M, b);
			}
		}
	}

	printf("}\n");

	// Print numbers < 1
	printf("\nAll the rational numbers in < 1 category are:\n");	

	for (int a = 0; a <= M; a++)
	{
		for (int b = a+1; b <= M; b++)
		{
			if (GCD (a, b) == 1)
			{
				printf("%d/%d ", a, b);
			}
		}
	}

	printf("\nTotal number of rational numbers in < 1 category is:%d\n", counter_g1);

	// Print numbers >= 1	
	printf("\nAll the rational numbers in >= 1 category are:\n");

	for (int b = 1; b <= M; b++)
	{
		for (int a = b; a <= M; a++)
		{
			if (GCD (a, b) == 1)
			{
				printf("%d/%d ", a, b);
			}
		}
	}

	printf("\nTotal number of rational numbers in >= 1 category is:%d\n", counter_g2);

	return 0;
} 
