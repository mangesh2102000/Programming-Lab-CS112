// Name of coder : Mangesh Chandrawanshi
// Roll No       : 1801cs16
// Date created  : 05/02/2019
// Brief objective of the program: Decimal to Binary Conversion, Calculating The Hamming Distance, Binary to Gray Conversion.  

#include <stdio.h>
#include <math.h>

// XOR function
int XOR(int m, int n)
{
	if (m == n)
	{
		return 0;		
	}
	else
	{
		return 1;
	}
}

int main()
{
	// Variable Declaration	
	int a, b, x, y, i, j, ham_dist;
	int bin_a = 0, bin_b = 0, gray_a = 0, gray_b = 0;
	
	// Input
	printf("Enter two decimal integers : ");
	scanf("%d %d", &a, &b);

	// Decimal to binary conversion	
	if (a == 0)
	{
		bin_a = 0;
		x = 1;
	}
	else
	{
		for (i = 0; a != 0; i++)
		{
			bin_a = bin_a + (a%2)*pow(10,i);
			a = a/2;
		}
		// Store no. of digits in binary form
		x = i;
	}

	if (b == 0)
	{
		bin_b = 0;
		y = 1;
	}
	else
	{
		for (j = 0; b != 0; j++)
		{
			bin_b = bin_b + (b%2)*pow(10,j);
			b = b/2;
		}
		// Store no. of digits in binary form
		y = j;
	}

	// Hamming distance calculation
	int p = bin_a, q = bin_b;

	if (x == y)
	{
		do
		{
			if (p % 10 != q % 10)
			{
				ham_dist++;
			}
			p = p / 10;
			q = q / 10;  
		}
		while(p != 0);
	}
	else
	{
		ham_dist = -1;
	}

	// Binary to gray conversion.	
	int g = bin_a, h = bin_b;
	int e = bin_a / 10, f = bin_b / 10;
	
	for (int k = 0; k < x - 1; k++)
	{
		gray_a = gray_a + XOR(g%10,e%10)*pow(10,k);	
		g = g / 10;
		e = e / 10;
	}

	if (gray_a != 0 || (gray_a == 0 && bin_a != 0))
	{
		gray_a = gray_a + pow(10, x - 1);
	}

	for (int l = 0; l < y - 1; l++)
	{
		gray_b = gray_b + XOR(h%10,f%10)*pow(10,l);	
		h = h / 10;
		f = f / 10;
	}

	if (gray_b != 0 || (gray_b == 0 && bin_b != 0))
	{
		gray_b = gray_b + pow(10, y - 1);
	}

	// Output	
	printf("The desired output : %d %d %d %d %d\n", bin_a, bin_b, ham_dist, gray_a, gray_b);
	return 0;
}
