#include<stdio.h>
int main()
{
	int i,j,k;
	int cnt;
	cnt=0;
	for(i=1;i<5;i++)
	{
		for(j=1;j<5;j++)
		{
			for(k=1;k<5;k++)
			{
				if(i!=j&&i!=k&&j!=k)
				{
					cnt++;
					printf("%d%d%d",i,j,k); 
				}
			}
		}
	}
	printf("total:%d",cnt);
} 
