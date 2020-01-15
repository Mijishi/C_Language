#include<stdio.h>
#include<math.h>
int main()
{
	long int i,j,k;
	for(i=1;i<10000;i++)
	{
		j=sqrt(i+100);
		k=sqrt(i+268);
		if(j*j==i+100&&k*k==i+268)
		{
			printf("%ld\n",i);	
		}	
	}	
} 
