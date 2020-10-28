// Name of coder : Mangesh Chandrawanshi  
// Roll No       : 1801CS16
// Date created  : 26th Mar 2019
// Brief objective of the program : Complete task given in Assignment 8

#include <stdio.h>

// Structure Definition
typedef struct student{
	int roll_number;
	char grades[6];
	float CGPA;
}student;

// Function I to sort in increasing order of roll numbers
void sort_by_roll_number(student l[], int n)
{
	int swap=-1,i,j;
	while(swap != 0)
	{
		swap=0;
		for(i=0;i<n-1;i++)
		{
			if(l[i+1].roll_number<l[i].roll_number)
			{
				student temp;
				temp = l[i];
				l[i] = l[i+1];
				l[i+1] = temp;
				swap++;
			}
		}
	}

	printf("\nList sorted by roll no\n");

	for(i=0;i<n;i++)
	{
		printf("%d ", l[i].roll_number);

		for(j=0;j<6;j++)
		{
			printf("%c ", l[i].grades[j]);
		}

		printf("%.2f\n",l[i].CGPA);
	}
}

// Function II to sort in decreasing order of CGPA
void sort_by_CGPA(student l[], int n)
{
	int swap=-1,i,j;
	while(swap != 0)
	{
		swap=0;
		for(i=0;i<n-1;i++)
		{
			if(l[i+1].CGPA>l[i].CGPA)
			{
				student temp;
				temp = l[i];
				l[i] = l[i+1];
				l[i+1] = temp;
				swap++;
			}
		}
	}

	printf("\nList sorted by CGPA\n");

	for(i=0;i<n;i++)
	{
		printf("%d ", l[i].roll_number);

		for(j=0;j<6;j++)
		{
			printf("%c ", l[i].grades[j]);
		}

		printf("%.2f\n",l[i].CGPA);
	}
}

// Main
int main()
{
	int n,i,j;
	scanf("%d",&n);

	student a[n];
	// Input 
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i].roll_number);
		for(j=0;j<6;j++)
		{
			char q;
			scanf("%c",&q);
			if(q != ' ')
			{
				a[i].grades[j]=q;	
			}
			else
			{
				j--;
			}
		}
	
		// CGPA calculation
		int x[6]={0};
		for(j=0;j<6;j++)
		{
			if(a[i].grades[j]=='E')x[j]=10;
			else if(a[i].grades[j]=='A')x[j]=9;
			else if(a[i].grades[j]=='B')x[j]=8; 
    		else if(a[i].grades[j]=='C')x[j]=7;
			else if(a[i].grades[j]=='D')x[j]=6;
			else if(a[i].grades[j]=='P')x[j]=5;
			else if(a[i].grades[j]=='F')x[j]=0; 
		}

		float ans = (4*x[0]+5*x[1]+3*x[2]+4*x[3]+3*x[4]+1*x[5])/(float)20;
	
		a[i].CGPA = ans;
	}
	
	// Call to function I
	sort_by_roll_number(a,n);

	// Call to function II
	sort_by_CGPA(a,n);

	return 0;
}
