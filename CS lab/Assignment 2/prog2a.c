// Name of coder: Mangesh Chandrawanshi
// Roll No: 1801CS16
// Date created: 22/01/2019
// Brief objective of the program: Determines the nature of triangle formed with the given points along with its area.(If they are not collinear)
                         

#include <stdio.h>

void main()
{
	// Declare variables for coordinates and square of length of sides 	
	float x1, y1, x2, y2, x3, y3, a, b, c;

	// Prompt the user for input
	printf("Enter three points:\n");
	scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
	
	// Calculate value of square of length of sides
	a = (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);
	b = (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1);
	c = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);

	// Calculate area of triangle		
	float Area;	
	Area = 0.5 * ( (x1-x3)*(y2-y3) - (x2-x3)*(y1-y3) );

	// Check whether points are collinear or not	
	if ( Area == 0 )
	{
		printf("Collinear\n");
	}
	else
	{
		printf("Non-collinear\n");
		
		float cosa, cosb, cosc;
				
		cosa = (b + c - a);
		cosb = (a + c - b);
		cosc = (a + b - c);

		// Check type of triangle
		if (cosa < 0 || cosb < 0 || cosc < 0)
		{
			printf("Obtuse Angled Triangle\n");
		}
		else if (cosa == 0 || cosb == 0 || cosc == 0)
		{
			printf("Right Angled Triangle\n");
		}
		else 
		{
			printf("Acute Angled Triangle\n");
		}		

		printf("Area is %.2f\n", Area);
	}
}

