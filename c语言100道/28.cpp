#include<stdio.h>
int main()
{
	float a,b,c,s,a1,b1;
	a1=1;
	b1=1;
	a=2;
	b=1;
	s=0;
	for(int i=0;i<=20;i++)
	{
		s=s+a/b;
		a=a+a1;
		b=b+b1;
		a1=a;
		b1=b;
	}
	printf("%.2f",s);
}
