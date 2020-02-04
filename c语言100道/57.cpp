#include<stdio.h>

int main()
{
    int i,j,n,y,m;
	printf("ÇëÊäÈëĞĞÊı£º");
	scanf("%d",&n);
	int a[n][n];
	
	for(i=0;i<n;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	
	for(y=0;y<n;y++)
	{
		for(m=0;m<n-y-1;m++)
		{
			printf("  ");
		}
		for(m=0;m<=y;m++)
		{
			printf("%4d",a[y][m]);	
		}
		printf("\n");	
	}
	return 0;	
} 
