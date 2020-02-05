#include<stdio.h>
int main()
{
	int i,j,k,t;
	printf("ÇëÊäÈë3¸öÊý");
	scanf("%d%d%d",&i,&j,&k);
	if(i>j)
	{
		t=i;
		i=j;
		j=t;
	}
	if(i>k)
	{
		t=i;
		i=k;
		k=t;
	}
	if(j>k)
	{
		t=j;
		j=k;
		k=t;
	}
	printf("%3d%3d%3d",i,j,k);
}
