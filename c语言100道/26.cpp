#include<stdio.h>
int main()
{
	int line,i,j,k;
	printf("please input line:");
	scanf("%d",&line);
	for(i=0;i<line;i++)
	{
		for(j=0;j<line-i-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<2*(i+1)-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<line-1;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf(" ");
		}
		for(k=0;k<(2*line)-2*(i+1)-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

