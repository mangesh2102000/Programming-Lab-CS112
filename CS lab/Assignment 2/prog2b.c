// Name of coder: Mangesh Chandrawanshi
// Roll No: 1801CS16
// Date created: 22/01/2019
// Brief objective of the program:Find the time taken by the trains to cross each other completely.

#include <stdio.h>

void main()
{
	// Declare variables	
	float x, y, time;
	
	// Prompt the user for input
	printf("Enter x and y in seconds: ");
	scanf("%f %f", &x, &y);

	// Calculation of time
	time = (7*x + 9*y) / 16;

	printf("Required time is %.3f\n", time);
}
