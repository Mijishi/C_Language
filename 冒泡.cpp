#include<stdio.h>
int main()
{
	int i,j,w;
	int a[10];
	printf("请输入10个数字:");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		for(j=0;j<10-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
			w=a[j];
			a[j]=a[j+1];
			a[j+1]=w;
			}
		}
	}
	printf("排序后：\n");
	for(i=0;i<=9;i++)
	printf("%4d\n",a[i]);
	return 0;
}
