#include<stdio.h>
int main()
{
	int a,b,c,d,e,num;
	printf("请输入一个5位数");
	scanf("%d",&num);
	a=num/10000;
	b=num%10000/1000;
	d=num%100/10;
	e=num%10;
	if((a==e)&&(b==d))
	{
		printf("是回文数");
	}
	else
	{
		printf("不是回文数");
	}
	
}
