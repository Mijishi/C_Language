#include <stdio.h>

int main()
{
	int a[10], b[10];
	int i,j,k;
	j=0;
	printf("请输入一个长度为10的数组：\n");
	for (i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("请输入移动量：");
	scanf("%d", &k);
	for(i=10-k;i<10;i++)
	{
		b[j]=a[i];
		j++;
	}
	for(i=0;i<10-k;i++)
	{
		b[j]=a[i];
		j++;
	}
	for(j=0;j<10;j++)
		printf("%d ",b[j]);
	return 0;
}
