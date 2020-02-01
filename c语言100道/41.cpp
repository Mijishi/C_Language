#include<stdio.h>
int main()
{
	int a[10];
	int i,j,w,change=1;
	printf("ÇëÊäÈë10¸öÊı£º");
	for(i=0;i<9;i++)
	scanf("%d",&a[i]);
	for(i=0;i<9 && change==1;i++)
	{
		change=0;
		for(j=0;j<10-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				w=a[j];
				a[j]=a[j+1];
				a[j+1]=w;
				change=1;
			}
		}	
	}
	for(i=0;i<9;i++)
	printf("%d\t",a[i]);
	return 0;	
} 
