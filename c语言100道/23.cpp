#include<stdio.h>
int main()
{
	int i,j,s;
	for(i=1;i<1000;i++)
	{
		s=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s=s+j;
			}
		}
		if(i==s)
		{
			printf("%d\t",i);
		}
	}
}
