#include <stdio.h>

int main()
{
int a[5],num,k,i=0;
printf("������һ����������λ��������:");
scanf("%d",&num);
if(num<=0)
{
	printf("������һ��������");
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
	printf("������һ����������λ��������!");
}
else
{
	printf("����һ��%dλ��;\n",i);
	printf("�����ӡΪ:");
	for(int j=0;j<=(i-1);j++)
	{
		printf(" %d",a[j]);
	}
}
return 0;
} 
