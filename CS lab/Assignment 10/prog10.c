// Name : Mangesh Chandrawanshi
// Roll No. : 1801cs16
// Date created : 10/04/2019
// Breif Objective: Task in given assignment

#include<stdio.h>
#include<stdlib.h>
#define MAXITERATION 100
/*
int isequal(float a[],float b[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]-b[i])
		return 0;
	}	
	return 1;
}
*/
int main(int argc, char *argv[])
{
	int max=100;
	if(argc != 3)
	{
		return -1;
	}

	FILE *fptr1;
	fptr1 = fopen(argv[1],"r");

	if(fptr1==NULL) 
	{
		printf("Input file does not exist!\n");
		return -1;		
	}
	int i,k,diff,z;
	int p[100],a[100]={0},b[10]={0};	

	int g,check=0;
	fscanf(fptr1,"%d",&g);

	char c,f[30];
	
	int j,m;				
	j=0;
	m=-1;
	while(fscanf(fptr1,"%c",&c) != EOF)
	{
	check=0;
	fgets(f,30,fptr1);
	if(f[0]!=' ')
	{
	    for(i=0;f[i]!='\0';i++)
		{	
		if(f[i]==' ')check++;
		p[j]=j+1;
		if(check==1 && (f[i]>='0' && f[i]<='9'))
		{
		a[j]=a[j]*10+((int)f[i]-48);
		}					
		}
        j++;
	}
	else
	{
	    for(i=0;f[i]!='\0';i++)
   	    {
		if(f[i]==' ')
		m++;
		if((int)f[i]>=48 && (int)f[i] <=57 )
		{
		      b[m]=(b[m]*10)+(int)f[i]-48;
		}
	    }	
	}
 	}

	float imean[g];
	int group[g][100],l1[g];
	for(i=0;i<g;i++)
	{
		imean[i]=0;
		l1[i]=0;
	}
	for(i=0;i<g;i++)
	{
		for(k=0;k<100;k++)
		{
			group[i][k]=0;
		}
	}

	for(i=0;i<g;i++)
	{
		imean[i]=a[b[i]-1];
	}
	
	while(max--)
	{
		
		for(i=0;i<g;i++)
		{
			for(k=0;k<100;k++)
			{	
				group[i][k]=0;
			}
		}
	
		for(i=0;i<g;i++)
		{
			l1[i]=0;
		}
		
		for(i=0;i<j;i++)
		{z=0;
			diff = abs(a[i]-imean[0]);
			for(k=0;k<g;k++)
			{
				
				if(abs(a[i]-imean[k]) < diff)
				{
					diff = abs(a[i]-imean[k]);
					z = k;
				}
			}
			group[z][l1[z]]=a[i];
			l1[z]++;
		}				
		
		int sum;
		for(i=0;i<g;i++)
		{
			sum = 0;
			for(k=0;k<100;k++)
			{
				sum = sum + group[i][k];
			}
			imean[i] = (float)sum/l1[i];
		}
		
	}	
	
	fclose(fptr1);

	FILE* fptr;
	fptr=fopen(argv[2],"w");
	if(fptr==NULL)
    	{
        	printf("Error in opening output file");
        	return 0;
    	}
	for(i=0; i<g; i++)
    	{
        	fprintf(fptr,"Group%d: ",i+1);
        	for(k=0; k<l1[i]; k++)
        	{
            	int q,i1;
            	for(i1=0; i1<j; i1++)
            	{
                	if(group[i][k]==a[i1])
						q=i1;
            	}
            	q++;
            	fprintf(fptr,"P%d ",q);
        } 
        fprintf(fptr,"\n");
    }
    for(i=0; i<g; i++)
    	fprintf(fptr,"Mean%d: %f\n",i+1,imean[i]);
		
	return 0;
}
