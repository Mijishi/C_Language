#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	printf("请输入一个数");
	scanf("%d",&i);
	if(i*i>50)
	{
		exit(0);
	}
	else
	{
		printf("%d",i*i);
	}
}
