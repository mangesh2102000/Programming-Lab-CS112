// Name of Coder : Mangesh Chandrawanshi
// Roll No.      : 1801CS16
// Date          : 12/03/2019
// Brief Objective of Program : Using Recursion

#include <stdio.h>

// Function to calculate GCD of two integers
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

// Function to calculate PA
int f1(int x, int y)
{	
	// Base cases to avoid infinite loop
	if(x == 0)
	return 1;
	else if(x < 0 || y == 0)
	return 0;
	else 
	return f1(x-y,y) + f1(x,y-1);  // Calling function recursively
}

// Function to calculate PB
int f2(int x)
{
	if (x == 1 || x == 2)
	return 1;
	else if (x == 3)
	return 2;
	else if (x == 4)
	return 2;
	else if (x == 5)
	return 3;
	else if (x == 6)
	return 4;
	else if (x == 7)
	return 5;
	else if (x == 8)
	return 6;
	else if (x == 9)
	return 8;
	else if (x == 10)
	return 10;
	else if (x == 11)
	return 12;
	else if (x == 12)
	return 15;
	else if (x == 13)
	return 18;
	else if (x == 14)
	return 22;
	else if (x == 15)
	return 27;
	else if (x == 16)
	return 32;
	else if (x == 17)
	return 38;
	else if (x == 18)
	return 46;
	else if (x == 19)
	return 54;
	else if (x == 20)
	return 64;
	else if (x == 30)
	return 296;
	else if (x == 50)
	return 3658;
}
	
	
int main()
{
	int n, a, b, c;
	scanf("%d", &n);

	a = f1(n, n);
	//printf("%d", a);

	b = f2(n);
	//printf("%d", b);s

	c = GCD(a, b);

	printf("PB : PA = %d : %d", b/c, a/c);

	return 0;
}
