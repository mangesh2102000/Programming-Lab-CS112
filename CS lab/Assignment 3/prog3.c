// Name of coder: Mangesh Chandrawanshi
// Roll No: 1801CS16
// Date created: 29/01/2019
// Brief objective of the program: Returns the smallest prime number p >= n of form 4k+1 (p = a2 + b2). Prints the values of p, a, b.

#include <stdio.h>
#include <math.h>

int is_prime(long long int p);

void main()
{
        //Input variables

 	long long int a = 0, b = 0, p = 0, n = 0 ;
 	char roll_number[10] = "1801CS16";
	printf("Enter a positive integer (n): ");
 	scanf("%lld", &n); 	

	int check1 = 1,check2 = 1;

	p = n;

	// Check for smallest no. of form 4k+1 >= n.

	if (p % 4 == 0)
	{
		p++;	
	}
	else if (p % 4 == 2)
	{
		p = p + 3;	
	}
	else if (p % 4 == 3)
	{
		p = p + 2;	
	}

	// Check for prime.
	
	while (check1 == 1)
	{
		if (is_prime(p))
		{
			check1 = 0;
		}
		else
		{
			p = p + 4;
		}
	}

	// Find values of a and b.
 
	int i = 0;	

	while (check2 == 1)
	{
		if ( sqrt(p - (i*i)) == (int)sqrt(p - (i*i)) )
		{
			a = i;
			check2 = 0;
		}
		i++;
	}

	b = sqrt(p - (a*a));

	// Output

	printf("\nFinal values are: Roll Number = %s Input n = %lld, p = %lld, a = %lld, b = %lld", roll_number, n, p, a, b);

}

// Function to check given no. is prime or not.

int is_prime(long long int p)
{
	int divisors = 0;

	for (int i = 2; i <= sqrt(p); i++)
	{
		if(p % i == 0)
		{
			divisors++;
			break;
		}
	}

	if (divisors == 0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
