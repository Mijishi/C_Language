#include<stdio.h>
int main()
{
	int num;
	float sum;
	int j=1;
	int i=2;
	sum=0;
	printf("请输入一个数");
	scanf("%d",&num);
	if(num%2==0)
	{
		while(i<=num)
		{
			sum=sum+1/i;
			i=i+2;	
		}
		printf("%.2f",sum);	
	}	
	else
	{
		while(j<=num)
		{
			sum=sum+1/j;
			j=j+2;
		}
		printf("%.2f",sum);		
	}
} 
