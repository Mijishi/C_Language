#include <stdio.h>

int main()
{
int a[5],num,k,i=0;
printf("请输入一个不多于五位的正整数:");
scanf("%d",&num);
if(num<=0)
{
	printf("请输入一个正整数");
}
while(num>0)
{
	k=num%10;
	a[i]=k;
	++i;
	num=num/10;
}
if(i>=6)
{
	printf("请输入一个不多于五位的正整数!");
}
else
{
	printf("这是一个%d位数;\n",i);
	printf("逆序打印为:");
	for(int j=0;j<=(i-1);j++)
	{
		printf(" %d",a[j]);
	}
}
return 0;
} 
