//Name: Chandrawanshi Mangesh
//Roll no. 1801cs16
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char keynum[1000];
char key1[1000];

int isa(char c)
{
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
	{	return 1;}
	return 0;
}

char tou(char c)
{
	if((c>='a' && c<='z'))
	{
		return (c-'a'+'A');
	}
	return c;
}

int prepare_Encr_Key( char *Encr_Key )
{
	int j=0,i;
int checksum[1000]={0};
	
	for(i=0;Encr_Key[i]!='\0';i++)
	{
		if(isa(Encr_Key[i]))
		{
		  key1[j++]= tou(Encr_Key[i]);			
		}

	}
int z=0;	
for(i=0;key1[i]!='\0';i++){
if(checksum[key1[i]]==0)
keynum[z++]=key1[i];
checksum[key1[i]]++;
}

int check = z;
//printf("%d",check);

for(i=65;i<=90;i++){
if(checksum[i]==0){
keynum[z++]=i;}
}
//printf("%d",z);
/*for(int i=0;i<26;i++)
{
	printf("%c",keynum[i]);
}*/
if(check < 8) return 0;
return 1;
	
}

int main()
{
	char *s,*key,*pass;
	int i,j,p,m,a[26]={0};
	char c[26];

	s = malloc(256);
	key = malloc(256);
	pass = malloc(256);
	
	scanf("%[^\n]s", s);		
	
	for( i=0; s[i]!=':';i++)
	{
		key[i]=s[i];
	}	

	i++;p=0;
	int v=0;
	for(;s[v]!=';';v++)
	{
		i++;
		pass[v]=s[i];
			p++;
		
	}
	
	int x = prepare_Encr_Key(key);
	
	if(x==1)
	{int i;	
	for	(i=0;pass[i]!='\0';i++)
	{
		printf("%c",keynum[pass[i]-'A']);
	}
	}
	else
	{	
		printf("Invalid Input\n");
	}
	return 0;
}
