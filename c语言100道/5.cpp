#include<stdio.h>
int main()
{
	int x,y,z,t1,t2,t3;
	scanf("%d %d %d",&x,&y,&z);
	if(x>y)
	{
		t1=x;
		x=y;
		y=t1;
	}
	if(y>z)
	{
		t2=y;
		y=z;
		z=t2;
	}
	if(x>z)
	{
		t3=x;
		x=z;
		z=t3;
	}
	printf("%d %d %d",x,y,z);
		
} 
