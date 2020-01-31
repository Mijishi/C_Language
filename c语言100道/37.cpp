#include<stdio.h>
int main()
{
	int i,j,cnt,a[20];
	printf("你要输入几个数");
	scanf("%d",&cnt);
	for(i=0;i<cnt;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=cnt-1;j>=0;j--)
	{
		printf("%d\t",a[j]);
	}
	return 0;
}
