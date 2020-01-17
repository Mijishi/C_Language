#include<stdio.h>

void judge(int n);

int main()
{
	int a;
	scanf("%d",&a);
	judge(a);
} 

void judge(int n)
{
	if (n == 1)
	{
		printf("是3的幂次方\n");	
	}
	while(n>3&&n%3==0)
	{
		n=n/3;
	}
	if(n==3)
	{
		printf("是3的幂次方\n");
	}
	else
	{
		printf("不是3的幂次方\n");
	}
}
