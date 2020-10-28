// Name of coder   : Mangesh Chandrawanshi
// Roll No         : 1801CS16
// Date created    : 19/02/2019
// Brief objective of the program  : Program that completes all the tasks in Assignment 6


#include <stdio.h>
#include <math.h>

// Function to check perfect square
int is_perfect_square(int y)
{
	if (sqrt(y) == (int)(sqrt(y)))
		return 1;
	else
		return 0;
}

// Main
int main()
{
	// Prompt the user for input	
	int n, k1, k2;
	scanf("%d", &n);
	
	int a[n], b[n], d[n], f[n];
	float c[n];

	int A = 0, A1 = 0;

	// Check whether array element is fibonacci or not
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);

		if ( is_perfect_square(5*a[i]*a[i] - 4) || is_perfect_square(5*a[i]*a[i] + 4) )
		{
			f[i] = a[i];
		}
		else 
		{
			f[i] = -1;
		}			
	}

	scanf("%d", &k1);
	scanf("%d", &k2);

	// Reverse a[n] and store in b[n]
	for (int i = 0; i < n; i++)
	{
		b[i] = a[(n-i)-1];
	}

	// Sort the fibonaaci elements in increasing order
	int swap = -1;
	while (swap != 0)
	{
		swap = 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (f[i+1] < f[i])
			{
				int temp = f[i];
				f[i] = f[i+1];
				f[i+1] = temp;
				swap++;
			}
		}
	}

	// Print fibonacci elements
	for (int i = 0; i < n; i++)
	{
		if (i==0 && f[i]!=-1)
		{ 
			printf("%d ", f[i]);
		}
	
		if (i>0 && f[i]!=-1 && f[i]!=f[i-1])
		{ 
			printf("%d ", f[i]);
		}
		
	}

	printf("  ");

	// Print C
	for (int i = 0; i < n; i++)
	{
		int l = a[i];
		int j = 0;

		for (j = 0; l != 0; j++)
		{
			l = l/10;	
		}
		d[i] = j;

		c[i] = (float)a[i] + (float)b[i]/pow(10, d[i]);
		printf("%.2f ", c[i]);  
	}

	printf("  ");

	// Value of Polynomial at x=k1
	for (int i = 0; i < n; i++)
	{
		A = A + a[i]*pow(k1,i);
	}

	printf("%d  ", A);

	// Value of derivative of polynomial at x=k2	
	for (int i = 0; i < n; i++)
	{
		A1 = A1 + i*a[i]*pow(k2,i-1);
	}

	printf("%d\n", A1);

	return 0;
} 

