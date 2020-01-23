#include<stdio.h>
int main()
{
	int i,j,k,s;
	k=0;
	for(i=1;i<=20;i++)
	{
		s=1;
		for(j=i;j>0;j--)
		{
			s=s*j;
		}
		k=k+s;
	}
	printf("%d",k);
}
