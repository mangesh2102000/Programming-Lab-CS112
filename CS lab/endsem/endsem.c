// Name of coder: Mangesh Chandrawanshi
// Roll No.     : 1801cs16
// Date Created : 23RD APR 2019
// Brief Objective of the program : Initializing a matrix with given conditions and Printing it clockwise spirally

#include<stdio.h>

//Global Declaration of 2D array as Matrix
int M[25][25];

//Function to initialize the Matrix
void matrix_initializer(int r, int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			M[i][j]= (i*i)+(4*j*j);
			printf("%d ",M[i][j]);
		}
		printf("\n");
	}
}

//Function to print elements of Matrix Clockwise-Spirally
void clockwise_spiral_printer(int counter,int r, int c,int rmax,int rmin,int cmax, int cmin)
{
	int n=r*c;
	
	for(int i=cmin;i<cmax;i++)
	{
		printf("%d ",M[rmin][i]);			
        counter++;
		if(counter == n)
			return ;
	}
	for(int i=rmin+1;i<rmax;i++)
	{
		printf("%d ",M[i][cmax-1]);
		counter++;
		if(counter == n)
			return ;
	}
	for(int i=cmax-1-1;i>=cmin;i--)
	{
		printf("%d ",M[rmax-1][i]);
		counter++;
		if(counter == n)
			return ;
	}
	for(int i=rmax-1-1;i>rmin;i--)
	{
		printf("%d ",M[i][rmin]);
		counter++;
		if(counter == n)
			return ;
	}

	//Recursive Implementation
	return clockwise_spiral_printer(counter,r,c,rmax-1,rmin+1,cmax-1,cmin+1);	
}

//Function MAIN
int main()
{
	int r,c;

	//Prompt user for Input	
	scanf("%d %d",&r,&c);

	printf("\n");

	//Call function to print Initialized Matrix	
	matrix_initializer(r,c);

	printf("\nThe clockwise spiral listing is:\n\n");

	//Call function to print elements Clockwise-Spirally		
	clockwise_spiral_printer(0,r,c,r,0,c,0);

	printf("\n\n");

	return 0;
}





