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
		printf("��3���ݴη�\n");	
	}
	while(n>3&&n%3==0)
	{
		n=n/3;
	}
	if(n==3)
	{
		printf("��3���ݴη�\n");
	}
	else
	{
		printf("����3���ݴη�\n");
	}
}
