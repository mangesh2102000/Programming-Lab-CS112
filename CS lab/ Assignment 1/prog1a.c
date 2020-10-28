// Name of coder: Mangesh Chandrawanshi
// Roll No: 1801CS16
// Date Created: 15 Jan 2019
// Program to design a simple calculator.

#include <stdio.h>

void main()
{
	// Declare variables
	int X;
	float Y,Z;

	// Get input from user
	printf("Enter three numbers X (1: Addition or 2: Subtraction or 3: Multiplication or 4: Division), Y and Z\n");
	scanf("%d %f %f", &X, &Y, &Z);

	// Using input for X check for operation to be performed	
	if (X == 1)
	{
		printf("Addition of %f and %f is %f\n", Y, Z, Y + Z);
	}
	else if (X == 2)
	{
		printf("Subtraction of %f and %f is %f\n", Y, Z, Y - Z);
	}
	else if (X == 3)
	{
		printf("Multiplication of %f and %f is %f\n", Y, Z, Y * Z);
	}
	else if (X == 4)
	{
		printf("Division of %f and %f is %f\n", Y, Z, Y / Z);
	}

	// End of Program
}

	





