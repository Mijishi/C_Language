#include<stdio.h>
int main()
{
	int a,b,c,d,e,num;
	printf("������һ��5λ��");
	scanf("%d",&num);
	a=num/10000;
	b=num%10000/1000;
	d=num%100/10;
	e=num%10;
	if((a==e)&&(b==d))
	{
		printf("�ǻ�����");
	}
	else
	{
		printf("���ǻ�����");
	}
	
}
